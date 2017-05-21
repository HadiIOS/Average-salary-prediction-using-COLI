//
//  ViewController.swift
//  Machine Learning
//
//  Created by Hadi on 5/21/17.
//  Copyright © 2017 Hadi Nourallah. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    @IBOutlet weak var colitf: UITextField!
    @IBOutlet weak var renttf: UITextField!
    @IBOutlet weak var groceriestf: UITextField!
    @IBOutlet weak var purchasetf: UITextField!
    @IBOutlet weak var restauranttf: UITextField!
    @IBOutlet weak var label: UILabel!
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(self.tap)))
    }
    
    func tap() {
        self.view.endEditing(true)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


    @IBAction func calcualte(_ sender: Any) {
        let salary = SalaryModel()
        if let coli = getData(textField: self.colitf, tfName: "COLI") {
            salary.coli = coli
        } else {
            return
        }
        
        if let rent = getData(textField: self.renttf, tfName: "RENT") {
            salary.rent = rent
        } else {
            return
        }
        
        if let groceries = getData(textField: self.groceriestf, tfName: "GRECERIES") {
            salary.groceries = groceries
        } else {
            return
        }
        
        if let purchase = getData(textField: self.purchasetf, tfName: "PURCHASE") {
            salary.purchase = purchase
        } else {
            return
        }
        
        if let restaurant = getData(textField: self.restauranttf, tfName: "RESTAURANT") {
            salary.restaurant = restaurant
        } else {
            return
        }
        let formatter = NumberFormatter()
        formatter.maximumFractionDigits = 3
        let s = salary.getSalary() * 4365.97 / 100.0
        
        let str = formatter.string(from: NSNumber(floatLiteral: s))!
        
        self.label.text = "EXPECTED AVERAGE SALARY IS \(str)$"
    }
    
    fileprivate func getData(textField: UITextField, tfName: String) -> Double? {
        if (textField.text?.isEmpty == false) {
            if let coli = Double(textField.text!) {
                return coli
            } else {
                showAlert(text: "\(tfName) TEXT FIELD NUMBER NOT A FLOAT OR DOUBLE")
                return nil
            }
        } else {
            showAlert(text: "\(tfName) TEXT FIELD IS EMPTY")
            return nil
        }
    }
    
    func showAlert(text: String) {
        let alert = UIAlertController(title: "Error", message: text, preferredStyle: UIAlertControllerStyle.alert)
        alert.addAction(UIAlertAction(title: "Ok", style: UIAlertActionStyle.cancel, handler: nil))
        self.present(alert, animated: true, completion: nil)

    }
}


