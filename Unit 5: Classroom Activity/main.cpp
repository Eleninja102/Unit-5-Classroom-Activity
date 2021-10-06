//
//  main.cpp
//  Unit 5: Classroom Activity
//
//  Created by Coleton Watt on 10/5/21.
//

#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main() {
    cout << "Hello, World!\n";
    Fraction f1;
    Fraction f2(2, 10);
    Fraction f3(7,15);
    cout << "The Numerator of f2 is: " << f2.getNumerator() << endl;
    cout << "The Numerator of f2 is: " << f2.getDenominator() << endl;

    cout << "The Numerator of f3 is: " << f3.getNumerator() << endl;
    cout << "The Numerator of f3 is: " << f3.getDenominator() << endl;
    cout << f2 << endl;
    
    Fraction f4 = f2;
    f1 = f2 + f3;
    cout << f2 << " + " << f3 << " = " << f1 << endl;
   
    f1 = f2 - f3;
    cout << f2 << " - " << f3 << " = " << f1 << endl;
    
    f1 = f2 * f3;
    cout << f2 << " * " << f3 << " = " << f1 << endl;
    
    f1 = f2 / f3;
    cout << f2 << " / " << f3 << " = " << f1 << endl;

    
    return 0;
}
