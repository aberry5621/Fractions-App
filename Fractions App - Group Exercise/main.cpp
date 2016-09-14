//
//  main.cpp
//  Fractions App - Group Exercise
//
//  Created by ax on 9/14/16.
//  Copyright © 2016 COMP130. All rights reserved.
//  purpose: process fraction pairs
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
    cout << "Fractions Calculator" << endl;
    cout << "====================" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplcation" << endl;
    cout << "4. Division" << endl;
    cout << "                    " << endl;
    cout << "Choose option (1 - 4):   ";
    cin >> fraction_op_type;
    
    
    // P
    switch(fraction_op_type) {
        // case 1, fraction addition
        case 1:
            cout << "You Chose 1, Fraction Addition" << endl;
            cout << "For the first fraction:   "<< endl;
            cout << "Enter the numerator:   ";
            cin >> n1;
            cout << "Enter the denominator:    ";
            cin >> d1;
            cout << "Enter the numerator:   ";
            cin >> n2;
            cout << "Enter the denominator:    ";
            cin >> d2;
            
            

            // handle possible inputs tree
            if (d1 == 0 || d2 == 0) {
                cout << "ERROR: fractions cannot have zero denominators!" << endl;
            } else {
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
                if (result_n == 0) {
                    // zero fraction, result zero. show variable result for testing porpoises
                    cout << "The result is: " << result_n << endl;
                } else if (result_n < result_d) {
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
            cout << "You Chose 2, Fraction Subtraction" << endl;
            break;
        case 3:
            cout << "You Chose 3, Fraction Multiplication" << endl;
            break;
        case 4:
            cout << "You Chose 4, Fraction Division" << endl;
            break;
        default:
            cout << "You entered " << fraction_op_type  << ", which isn't a valid option. Please try again" << endl;
            break;
    }
    
    return 0;
}