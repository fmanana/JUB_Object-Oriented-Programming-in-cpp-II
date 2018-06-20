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

WindGauge::WindGauge(int period)
{
    this->period = period;
}

void WindGauge::currentWindSpeed(int speed)
{
    //  Pushing wind speed to the front of the deque
    history.push_front(speed);
    
    /*  If the size of the deque is greater than
        the specified period, the last elements are popped
    */
    while(history.size() > period)
        history.pop_back();
}

int WindGauge::highest() const
{
    std::deque<int>::const_iterator diter = history.begin();
    int max = *diter;
    while(diter != history.end())
    {
        if(*diter > max)
            max = *diter;
        diter++;
    }
    
    return max;
}

int WindGauge::lowest() const
{
    std::deque<int>::const_iterator diter = history.begin();
    int min = *diter;
    while(diter != history.end())
    {
        if(*diter < min)
            min = *diter;
        diter++;
    }
    
    return min;
}

int WindGauge::average() const
{
    std::deque<int>::const_iterator diter;
    int sum = 0;
    int average;

    for(diter = history.begin(); diter != history.end(); diter++)
    {
        sum += *diter;
    }
    average = sum / history.size();

    return average;
}

void Dump(WindGauge w)
{
    std::cout << "Highest wind speed: " << w.highest() << std::endl;
    std::cout << "Lowest wind speed: " << w.lowest() << std::endl;
    std::cout << "The average wind speed: " << w.average() << std::endl;
}