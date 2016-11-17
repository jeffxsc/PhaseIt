//
//  FirstViewController.swift
//  PhaseIt
//
//  Created by Xiaocheng Yang on 11/12/16.
//  Copyright © 2016 Berkly. All rights reserved.
//

import UIKit

class CourseSearchViewController: UIViewController {

    @IBOutlet weak var departmentField: UITextField!
    
    @IBOutlet weak var courseNumberField: UITextField!
    
    @IBOutlet weak var resevationSelector: UISegmentedControl!
    
    @IBAction func phaseThisCourse(_ sender: Any) {
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    
    func prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
    {
    // Make sure your segue name in storyboard is the same as this line
    if ([[segue identifier] isEqualToString:@"testSegue"])
    {
    // Get reference to the destination view controller
    YourViewController *vc = [segue destinationViewController];
    
    // Pass any objects to the view controller here, like...
    [vc setMyObjectHere:object];
    }
    }


}

