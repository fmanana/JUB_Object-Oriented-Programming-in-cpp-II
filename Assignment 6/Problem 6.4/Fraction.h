/*
    CH08-320143
    a6 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
    int numerator;
    int denominator;

    public:
        Fraction(int num, int denom);
        Fraction(std::string input);
        Fraction(){};
        ~Fraction(){};
        
        //Methods
        bool operator<(const Fraction&);
        bool operator<=(const Fraction&);
        bool operator>(const Fraction&);
        bool operator>=(const Fraction&);
        bool operator==(const Fraction&);
        bool operator!=(const Fraction&);
        Fraction operator+(const Fraction&);
        Fraction operator-(const Fraction&);
        Fraction operator*(const Fraction&);
        Fraction operator/(const Fraction&);
        void operator=(const Fraction&);
        friend std::ostream& operator<<(std::ostream& os, const Fraction& f)
        {
            os << f.numerator << "/" << f.denominator << std::endl;
            return os;
        }
        friend std::istream& operator>>(std::istream& is, Fraction& f)
        {
            std::cout << "Enter your fraction:" << std::endl;
            is >> f.numerator;
            getchar();
            is >> f.denominator;

            if(f.denominator == 0)
            {
                throw "Invalid data or logical error";
            }
            return is;
        }
};

#endif