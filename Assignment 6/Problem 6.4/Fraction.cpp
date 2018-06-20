/*
    CH08-320143
    a6 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <algorithm> //Using library for GCD function
#include "Fraction.h"

Fraction::Fraction(int num, int denom)
{
    if(denom == 0)
    {
        throw "Invalid data or logical error";
    }
    this->numerator = num;
    this->denominator = denom;
}

Fraction::Fraction(std::string input)
{
    char num[10], denom[10];
    //  Putting the numerator in a char array
    int i = 0;
    while(input[i] != '/')
    {
        num[i] = input[i];
        i++;
    }
    //  Incrementing i acts like getchar to skip the '/'
    i++;

    //  Putting the denominator in a char array
    int j = 0;
    while(input[i] != '\0')
    {
        denom[j++] = input[i++];
    }

    if(atoi(denom) == 0)
    {
        throw "Invalid data or logical error";
    }
    //  Converting the strings to integers
    this->numerator = atoi(num);
    this->denominator = atoi(denom);
}

bool Fraction::operator<(const Fraction& f)
{
    if((this->numerator/this->denominator) < (f.numerator/f.denominator))
        return true;
    else
        return false;
}

bool Fraction::operator<=(const Fraction& f)
{
    if((this->numerator/this->denominator) <= (f.numerator/f.denominator))
        return true;
    else
        return false;
}

bool Fraction::operator>(const Fraction& f)
{
    if((this->numerator/this->denominator) > (f.numerator/f.denominator))
        return true;
    else
        return false;
}

bool Fraction::operator>=(const Fraction& f)
{
    if((this->numerator/this->denominator) >= (f.numerator/f.denominator))
        return true;
    else
        return false;
}

bool Fraction::operator==(const Fraction& f)
{
    if((this->numerator/this->denominator) == (f.numerator/f.denominator))
        return true;
    else
        return false;
}

bool Fraction::operator!=(const Fraction& f)
{
    if((this->numerator/this->denominator) != (f.numerator/f.denominator))
        return true;
    else
        return false;
}

Fraction Fraction::operator+(const Fraction& f)
{
    Fraction result;

    /*  if statement check if the denominators are equal so only
        the numerators get added
    */
    if(this->denominator == f.denominator)
    {
        result.numerator = this->numerator + f.numerator;
        result.denominator = this->denominator;
    }
    else //Otherwise cross multiply numerators and denomators to get common multiples
    {
        result.numerator = (this->denominator*f.numerator) + (this->numerator*f.denominator);
        result.denominator = this->denominator*f.denominator;
    }

    //Simplifying the fraction using the greatest common divisor
    int gcd = std::__gcd(result.numerator, result.denominator);
    if(gcd < 0)
        gcd = -gcd; //We want the denominator to remain positive if the gcd is negative
    result.numerator = result.numerator/gcd;
    result.denominator = result.denominator/gcd;

    return result;
}

Fraction Fraction::operator-(const Fraction& f)
{
    Fraction result;

    /*  if statement check if the denominators are equal so only
        the numerators get subtracted
    */
    if(this->denominator == f.denominator)
    {
        result.numerator = this->numerator - f.numerator;
        result.denominator = this->denominator;
    }
    else //Otherwise cross multiply numerators and denomators to get common multiples
    {
        result.numerator = (this->numerator*f.denominator) - (this->denominator*f.numerator);
        result.denominator = this->denominator*f.denominator;
    }

    //Simplifying the fraction using the greatest common divosor
    int gcd = std::__gcd(result.numerator, result.denominator);
    if(gcd < 0)
        gcd = -gcd; //We want the denominator to remain positive if the gcd is negative
    result.numerator = result.numerator/gcd;
    result.denominator = result.denominator/gcd;

    return result;
}

Fraction Fraction::operator*(const Fraction& f)
{
    Fraction result;
    result.numerator = this->numerator * f.numerator;
    result.denominator = this->denominator * f.denominator;

    //Simplifying the fraction
    int gcd = std::__gcd(result.numerator, result.denominator);
    if(gcd < 0)
        gcd = -gcd; //We want the denominator to remain positive if the gcd is negative
    result.numerator = result.numerator/gcd;
    result.denominator = result.denominator/gcd;

    return result;
}

Fraction Fraction::operator/(const Fraction& f)
{
    Fraction result;
    //Multiply by the reciprocal
    result.numerator = this->numerator * f.denominator;
    result.denominator = this->denominator * f.numerator;
    
    //Simplifying the fraction
    int gcd = std::__gcd(result.numerator, result.denominator);
    if(gcd < 0)
        gcd = -gcd; //We want the denominator to remain positive if the gcd is negative
    result.numerator = result.numerator/gcd;
    result.denominator = result.denominator/gcd;

    return result;
}

void Fraction::operator=(const Fraction& f)
{
    this->numerator = f.numerator;
    this->denominator = f.denominator;
}
