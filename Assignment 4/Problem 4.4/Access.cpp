/*
    CH08-320143
    a4 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <set>
#include "Access.h"

void Access::activate(unsigned int code)
{
    std::set<unsigned int>::iterator iter;
    //checks if coded is already in the system
    for(iter = codes.begin(); iter != codes.end(); iter++)
    {
        if(*iter == code)
        {
            std::cerr << "Code is already in the system" << std::endl;
            return;
        }
    }

    codes.insert(code);
}

void Access::deactivate(unsigned int code)
{
    std::set<unsigned int>::iterator iter;
    for(iter = codes.begin(); iter != codes.end(); iter++)
    {
        if(*iter == code)
        {
            codes.erase(code);
        }
    }

}

bool Access::isactive(unsigned int code) const
{
     std::set<unsigned int>::iterator iter;
    for(iter = codes.begin(); iter != codes.end(); iter++)
    {
        if(*iter == code)
        {
            return true;
        }
    }

    return false;
}