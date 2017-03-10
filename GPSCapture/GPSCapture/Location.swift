//
//  Location.swift
//  GPSCapture
//
//  Simple POSO (?) that contains all the attributes needed for capturing location.
//
//  Created by Priyanjana Bengani on 11/28/16.
//  Copyright © 2016 anothercookiecrumbles. All rights reserved.
//

import Foundation

class Location {
    
    var latitude: Double
    var longitude: Double
    var altitude: Double
    var date: Date
    var horizontalAccuracy: Double
    var verticalAccuracy: Double
    var notes: String
    
    init(with latitude: Double, longitude: Double, altitude: Double, date: Date, horizontalAccuracy: Double, verticalAccuracy: Double, notes: String) {
        
        self.latitude = latitude
        self.longitude = longitude
        self.altitude = altitude
        self.date = date
        self.horizontalAccuracy = horizontalAccuracy
        self.verticalAccuracy = verticalAccuracy
        self.notes = notes
    }
}
