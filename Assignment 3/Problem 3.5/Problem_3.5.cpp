/*
    CH08-320143
    a3 p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <deque>
#include "WindGauge.h"

using namespace std;

int main()
{
    WindGauge W;

    //  Adding wind speeds to Windgauge
    W.currentWindSpeed(15);
    W.currentWindSpeed(16);
    W.currentWindSpeed(12);
    W.currentWindSpeed(15);
    W.currentWindSpeed(15);
    
    //  Dump function printing max, min and average
    Dump(W);
    cout << endl;
    
    W.currentWindSpeed(16);
    W.currentWindSpeed(17);
    W.currentWindSpeed(16);
    W.currentWindSpeed(16);
    W.currentWindSpeed(20);
    W.currentWindSpeed(17);
    W.currentWindSpeed(16);
    W.currentWindSpeed(15);
    W.currentWindSpeed(16);
    W.currentWindSpeed(20);

    Dump(W);


    return 0;
}