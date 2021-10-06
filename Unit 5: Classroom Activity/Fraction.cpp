//
//  Fraction.cpp
//  Unit 5: Classroom Activity
//
//  Created by Coleton Watt on 10/5/21.
//

#include "Fraction.hpp"
#include <iostream>
//Default constructor
//
Fraction::Fraction()
{
   numerator = 0;
   denominator = 1;
   cout << "Default" << endl;
}
Fraction::Fraction(int num, int den)//Overloaded Constructor
{
   numerator = num / gcd(num, den);
   denominator = den / gcd(num, den);
   cout << "Overloaded" << endl;
}
 
Fraction::Fraction(const Fraction& other) //copy constructor
{
   numerator = other.numerator;
   denominator = other.denominator;
   cout << "Copy" << endl;
}
 
int Fraction::getNumerator()
{
   return numerator;
}
int Fraction::getDenominator(){
    return denominator;
}
 
const Fraction Fraction::operator+ (const Fraction other)
{
   int newNumerator = numerator * other.denominator
       + other.numerator * denominator;
   int newDenominator = denominator * other.denominator;
 
   return Fraction(newNumerator, newDenominator);
}
 
int Fraction::gcd(int n, int d)
{
n = abs(n);
       d = abs(d);
        while (n != d) {
           if (n > d)
               n -= d;
           else
               d -= n;
       }
       return n;
}
 



const Fraction Fraction::operator- (const Fraction other){
    int newNumerator = numerator * other.denominator
        - other.numerator * denominator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
    
}
const Fraction Fraction::operator/ ( const Fraction other){
    int newNumerator = numerator * other.denominator;
    int newDenominator = denominator * other.numerator;
    return Fraction(newNumerator, newDenominator);
    
}
const Fraction Fraction::operator* (const Fraction other){
    int newNumerator = numerator * other.numerator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
    
}


ostream& operator << (ostream& os, const Fraction &f)
{
    os << f.numerator << "/" << f.denominator;
   return os;
}
