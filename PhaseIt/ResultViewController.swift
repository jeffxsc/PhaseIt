//
//  ResultViewController.swift
//  PhaseIt
//
//  Created by Xiaocheng Yang on 11/13/16.
//  Copyright © 2016 Berkly. All rights reserved.
//

import UIKit

class ResultViewController: UIViewController {
    
    var department = "."
    
    @IBOutlet weak var departmentOut: UILabel!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        departmentOut.text = department;
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
}

