/*
    CH08-320142
    a2_1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    this->real = 0;
    this->imag = 0;
}

Complex::Complex(const int &real, const int &imag)
{
    this->real = real;
    this->imag = imag;
}
    //Construction

Complex::~Complex() {}
    //Destruction

Complex& Complex::operator+(Complex a)
{
	this->real = a.real + this->real;
	this->imag = a.imag + this->imag;
	
	return *this;
}

Complex& Complex::operator-(Complex a)
{
	this->real = a.real - this->real;
	this->imag = a.imag - this->imag;
	
	return *this;
}

Complex& Complex::operator*(Complex a)
{
	this->real = (a.real*this->real) - (a.imag*this->imag);
	this->imag = (a.real*this->imag) + (a.imag*this->real);
	
	return *this;
}

Complex& Complex::operator=(Complex &a)
{
	this->real = a.real;
	this->imag = a.imag;
	
	return *this;
}

int Complex::operator==(Complex &a)
{
  if(a.real == this->real && a.imag == this->imag)
    return 1;
  else
    return 0;
}

ostream& operator<<(ostream& out, const Complex &a)
{
	out << a.real << "+" << a.imag << "i";
	
	return out;
}

istream& operator>>(istream& in, Complex &a)
{
	in >> a.real >> a.imag;
	return in;
}