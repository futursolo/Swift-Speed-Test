//
//  main.swift
//  Hello Cocoa
//
//  Created by Futur Solo on 2015/06/11.
//  Copyright (c) 2015 Futur Solo. All rights reserved.
//

import Foundation

var max_num = 1000000

println(String(format: "Swift Prime Number Calculator, max_num = %d.", max_num))

var time = NSDate().timeIntervalSince1970

var num_list:[Int] = []
var max_prime = 0

for i in 1...max_num {
    num_list.append(1)
}

for index in 2...Int(sqrt(Double(max_num))) {
    if num_list[index] != 0 {
        var current = index * 2
        current *= 2
        while current < max_num {
            num_list[current] = 0
            current = current + index
        }
    }
}

for index in 1...max_num {
    var current = index - 1
    if num_list[current] != 0 {
        max_prime = index - 1
    }
}

var time_left = NSDate().timeIntervalSince1970 - time


println(String(format: "Finished! Max Value is %d, Used Time: %.5fs.", max_prime, time_left))
