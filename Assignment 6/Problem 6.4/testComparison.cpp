#include <iostream>
#include "Fraction.h"

using namespace std;

int Fail = 0;
int Pass = 0;

void Test(bool t)
{
    if(t)
        Pass++;
    else
        Fail++;
}

int main()
{
    Fraction a(1, 2), b(1, 3);
    Test(a > b);
    Test(a < b);
    Test(a == b);
    Test(a >= b);
    Test(a <= b);
    Test(a != b);

    cout << "Pass: " << Pass << endl;
    cout << "Fail: " << Fail << endl;

    return 0;
}