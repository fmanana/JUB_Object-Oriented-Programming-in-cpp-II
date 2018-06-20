/*
    CH08-320143
    a3 p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <deque>

#ifndef WIND_H
#define WIND_H

class WindGauge
{
    private:
        /*  Period initialised as unsigned int
            because it is compared with the size of
            the deque (history.size()) in the
            currentWindSpeed function which is an
            unsigned int
        */
        unsigned int period;
        std::deque<int> history;
    public:
        WindGauge(int period = 12);
        void currentWindSpeed(int speed);
        int highest() const;
        int lowest() const;
        int average() const;
};

//  Dump function
void Dump(WindGauge w);

#endif