//
//  Fraction.hpp
//  Unit 5: Classroom Activity
//
//  Created by Coleton Watt on 10/5/21.
//

#ifndef Fraction_hpp
#define Fraction_hpp


#include <ostream>
using namespace std;
class Fraction
{
   public:
       Fraction();       //Default Constructor
       Fraction(int, int); //Overloaded Constructor differs in number or type of parameters
       Fraction(const Fraction& other); //Copy Constructor: parameter is the class
       const Fraction operator + (Fraction other);
    const Fraction operator - (Fraction other);//Overloaded operator
    const Fraction operator / (Fraction other);
    const Fraction operator * (Fraction other);
       int gcd(int, int);  //Method
       friend ostream& operator << (ostream& os, const Fraction &f);//Friend function has access to private variables
       int getNumerator();//getter method
    int getDenominator();
   protected:
       int numerator, denominator;
   private:
 
};

#endif /* Fraction_hpp */
