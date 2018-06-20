/*
    CH08-320142
    a3_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>
using namespace std;

class Complex{

private:

    int real;
    int imag;

public:

    Complex();
    Complex(const int &real, const int &imag);
    ~Complex();
	
	//Overloaded operators
	Complex& operator+(Complex a);
	Complex& operator-(Complex a);
	Complex& operator*(Complex a);
	Complex& operator=(Complex& a);
	friend std::ostream& operator<<(std::ostream& out, const Complex& a);
	friend std::istream& operator>>(std::istream& in, Complex& a);

};

#endif