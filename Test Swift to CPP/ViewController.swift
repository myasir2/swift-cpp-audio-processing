//
//  ViewController.swift
//  Test Swift to CPP
//
//  Created by Mohammad Yasir on 2021-03-25.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        let test = TestCppWrapper()
        let data: [Int32] = [1, 2, 3]
        data.withUnsafeBufferPointer { buf->Void in
            print(test.saySomething(buf.baseAddress))
        }
    }


}

