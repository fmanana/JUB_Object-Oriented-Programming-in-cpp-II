/*
    CH08-320143
    a6 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction a, b(5, 10), c;

    //Testing string constructor
    Fraction e("-12/13");

    //Testing operations and ostream overloading
    c = b;
    cout << "B = " << b;
    cout << "C = " << c;
    cout << "E = " << e;
    a = b - e;
    cout << "A = B - E = " << a;

    Fraction l(56, 32), m, n("1/-4");
    cout << "L = " << l;
    cout << "N = " << n;
    m = l * n;
    cout << "M = L * N = " << m;

    //Testing istream overloading
    Fraction o, p;
    cin >> o;
    cout << "O = " << o;
    p = o / b;
    cout << "P = O / B = " << p;

    //Testing comparisons
    if(b == c)
        cout << "B is the same as C" << endl;
    else
        cout << "B is not the name as C" << endl;
    
    if(a > o)
        cout << "A is greater than O" << endl;
    else
        cout << "A is not greater than O" << endl;

    if(n <= l)
        cout << "N is less than or equal to L" << endl;
    else
        cout << "N is great than L" << endl;
    
    return 0;
}