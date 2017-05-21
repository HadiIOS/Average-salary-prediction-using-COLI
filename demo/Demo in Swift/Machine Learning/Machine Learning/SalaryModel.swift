//
//  SalaryModel.swift
//  Machine Learning
//
//  Created by Hadi on 5/21/17.
//  Copyright © 2017 Hadi Nourallah. All rights reserved.
//

import Foundation

class SalaryModel {
    enum Functions {
        case f1
        case f2
        case f3
        case f4
        case f5
        case f6
    }
    
    var functions: Functions = .f1
    
    var coli        : Double = 0.0
    var rent        : Double = 0.0
    var purchase    : Double = 0.0
    var groceries   : Double = 0.0
    var restaurant  : Double = 0.0
    
    func getSalary() -> Double {
        var salary = 0.0
        decideFunction()
        
        switch functions {
        case .f1:
            salary = runFunction1()
            break
        case .f2:
            salary = runFunction2()
            break
        case .f3:
            salary = runFunction3()
            break
        case .f4:
            salary = runFunction4()
            break
        case .f5:
            salary = runFunction5()
            break
        case .f6:
            salary = runFunction6()
            break
        }
        return salary
    }
    
    fileprivate func runFunction1() -> Double {
        return 0.001 * groceries
            + 0.1613 * coli
            + 0.1088 * rent
            + 0.0226 * restaurant
            + 0.2363 * purchase
            - 8.4344
    }

    
    fileprivate func runFunction2() -> Double {
        return 0.001 * groceries
            + 0.1901 * coli
            + 0.1088 * rent
            + 0.0226 * restaurant
            + 0.1514 * purchase
            - 6.46
    }
    
    fileprivate func runFunction3() -> Double {
        return -0.0394 * groceries
            + 0.2381 * coli
            + 0.2631 * rent
            + 0.0226 * restaurant
            + 0.2782 * purchase
            - 13.3474;
    }
    
    fileprivate func runFunction4() -> Double {
        return 0.0145 * groceries
            + 0.3441 * coli
            + 0.3059 * rent
            + 0.0294 * restaurant
            + 0.2639 * purchase
            - 19.2371;
    }
    
    fileprivate func runFunction5() -> Double {
        return 0.0111 * groceries
            + 0.3565 * coli
            + 0.5736 * rent
            + 0.1169 * restaurant
            + 0.4203 * purchase
            - 43.3311
    }
    
    fileprivate func runFunction6() -> Double {
        return 0.0111 * groceries
            + 0.6368 * coli
            + 0.5094 * rent
            + 0.0247 * restaurant
            + 0.5848 * purchase
            - 74.3448
    }
    
    fileprivate func decideFunction() {
        if (coli > 58.87) {
            if (rent > 40.865) {
                functions = .f6
            } else {
                functions = .f5
            }
        } else {
            if (purchase > 64.015) {
                functions = .f4
            } else {
                if (purchase > 39.77) {
                    functions = .f3
                } else {
                    if (purchase > 32.3) {
                        functions = .f2
                    } else {
                        functions = .f1
                    }
                }
            }
        }
    }
    
}
