//
//  UserInfoViewController.swift
//  PhaseIt
//
//  Created by Xiaocheng Yang on 11/13/16.
//  Copyright © 2016 Berkly. All rights reserved.
//

import UIKit

class UserInfoViewController: UIViewController {
    
    @IBOutlet weak var majorField: UITextField!
    
    @IBOutlet weak var declaredSelector: UISegmentedControl!
    
    @IBOutlet weak var phaseITime: UIDatePicker!
    
    @IBAction func calculateChance(_ sender: Any) {
        
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
}
