//
//  main.cpp
//  Fractions App - Group Exercise
//
//  Created by ax on 9/14/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
// fraction_program.cpp
// Coder: Alex
// purpose: process fraction pairs
//

#include <iostream>
using namespace std;

int main() {
    
    // D
    int fraction_op_type = 0;
    // numerator / denominator values for fractions 1 and 2
    int n1 = 0, d1 = 0, n2 = 0, d2 = 0;
    // lowest common denominator
    double lcd = 0.0;
    // equivalent numerators
    double eq_n1 = 0.0, eq_n2 = 0.0;
    // result numerator and denominator storage
    int result_n = 0, result_d = 0;
    // improper fraction conversions: whole number, proper numerator and denominator
    int wn = 0, pn = 0, pd = 0;
    
    // I
    cout << "Process Fractions" << endl;
    cout << "Choose a type of fraction operation, (1 for addition): ";
    cin >> fraction_op_type;
    
    
    // P
    switch(fraction_op_type) {
        // case 1, fraction addition
        case 1:
            cout << "You Chose 1, Addition" << endl;
            cout << "Enter the numerator for fraction 1: ";
            cin >> n1;
            cout << "Enter the denominator for fraction 1: ";
            cin >> d1;
            cout << "Enter the numerator for fraction 2: ";
            cin >> n2;
            cout << "Enter the denominator for fraction 2: ";
            cin >> d2;
            
            // handle possible inputs tree
            if (d1 == 0 || d2 == 0) {
                cout << "Error: Cannot divide by zero" << endl;
            }
            else if (d1 == 100) {
                // standby for other conditions
            }
            else {
                // do the math for simple fraction addition
                
                // set denominators to lowest common denominator
                lcd = d1 * d2;
                // multiply the numerators by opposite denominators
                eq_n1 = n1 * d2;
                eq_n2 = n2 * d1;
                // add up to result fraction
                result_n = eq_n1 + eq_n2;
                result_d = lcd;
                // OUTPUTS
                if (result_n < result_d) {
                    // proper fraction, show the result
                    cout << "The result is: " << result_n << " / " << result_d << endl;
                } else if (result_n > result_d) {
                    // improper like 4/3 so convert to proper like: 1 1/3
                    wn = result_n / result_d;
                    pn = result_n % result_d;
                    pd = result_d;
                    // if the proper fraction numerator turns out to be zero (result is whole number) or not
                    if (pn == 0) {
                        cout << "The result is: " << wn << endl;
                    } else {
                        cout << "The result is: " << wn << " " << pn << " / " << pd << endl;
                    }
                }
            }
        
            break;
        case 2:
            cout << "You Chose 2" << endl;
            break;
        case 3:
            cout << "You Chose 3" << endl;
            break;
        case 4:
            cout << "You Chose 4" << endl;
            break;
        default:
            cout << "You Chose NOTHIN" << endl;
            break;
    }
    
    
    
    return 0;
}