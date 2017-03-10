//
//  ViewController.swift
//  GPSCapture
//  
//  A simple site to log lat-longs around New York to figure out where GPS signals suck
//  and where it's reasonably accurate.
//
//  Created by Priyanjana Bengani on 11/28/16.
//  Copyright © 2016 anothercookiecrumbles. All rights reserved.
//

import CoreLocation
import MapKit
import UIKit

class ViewController: UIViewController, CLLocationManagerDelegate {

    let locationManager = CLLocationManager()
    var currentLocation: CLLocation!
    
    var locations: [Location] = []
    
    var dir: URL?
    var fileURL: URL?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        locationManager.requestWhenInUseAuthorization()
        self.locationManager.delegate = self
        self.locationManager.desiredAccuracy = kCLLocationAccuracyBest
        self.locationManager.startUpdatingLocation()
        // Swift code that specifies the directory in which the log file will be saved; this allows me to sync the file with iTunes.
        self.dir = FileManager.default.urls(for: .documentDirectory, in: FileManager.SearchPathDomainMask.userDomainMask).last!
        // The really boring name of the file.
        self.fileURL = self.dir?.appendingPathComponent("log.txt")
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
        
    }

    // Give user an option to make a quick note while capturing the location. Can be empty/isn't mandatory.
    @IBAction func captureGPS(_ sender: UIButton) {
        let alert: UIAlertController = UIAlertController(title: "Notes!", message: "Add any notes that you may need.", preferredStyle: UIAlertControllerStyle.alert)
        
        // The text field from which I can extract my own notes.
        var input: UITextField?
        
        alert.addTextField(configurationHandler:{(textField: UITextField!) in
            textField.placeholder = "Add note here."
            input = textField
        })
        
        alert.addAction(UIAlertAction(title: "Cancel", style:
            UIAlertActionStyle.default, handler: nil))
        alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.default, handler: { (action) in
            
            if (CLLocationManager.locationServicesEnabled()) {
                self.locationManager.startUpdatingLocation()
                self.currentLocation = self.locationManager.location
                
                let latitude = self.currentLocation.coordinate.latitude
                let longitude = self.currentLocation.coordinate.longitude
                let altitude = self.currentLocation.altitude
                let horizontalAccuracy = self.currentLocation.horizontalAccuracy
                let verticalAccuracy = self.currentLocation.verticalAccuracy
                
                // If I want to do a massive analysis at the end, I should have this in an easily greppable form.
                var log = ("-------------------------------------" + "\n")
                log += ("Latitude is \(latitude)") + "\n"
                log += ("Longitude is \(longitude)") + "\n"
                log += ("Altidude is \(altitude)") + "\n"
                log += ("Horizontal uncertainty measure is \(horizontalAccuracy)") + "\n"
                log += ("Vertical uncertainty measure is \(verticalAccuracy)") + "\n"
                log += ("Notes field contains \(input?.text)") + "\n"
                log += ("-------------------------------------" + "\n")
                
                let location: Location = Location(with: latitude,
                                                  longitude: longitude,
                                                  altitude: altitude,
                                                  date: Date(),
                                                  horizontalAccuracy: horizontalAccuracy,
                                                  verticalAccuracy: verticalAccuracy,
                                                  notes: (input?.text)!)
                
                // Not doing anything with this at the moment, but maybe if I want to make this fancier.
                self.locations.append(location)
                
                self.writeToFile(text: log)
            }
            
        }))
 
        present(alert, animated: true, completion: nil)
        
    }
    
    func writeToFile(text: String) {
        
        let data = text.data(using: String.Encoding.utf8, allowLossyConversion: false)!
        
        print(self.fileURL ?? "empty")
        
        if FileManager.default.fileExists(atPath: self.fileURL!.path) {
            do {
                let fileHandle = try FileHandle(forWritingTo: fileURL!)
                
                fileHandle.seekToEndOfFile()
                fileHandle.write(data)
                fileHandle.closeFile()
            } catch {
                print("Can't open fileHandle \(error)")
            }
        }
        else {
            do {
                try data.write(to: self.fileURL!, options: .atomic)
            } catch {
                print("Can't write \(error)")
            }
        }
    }

}

