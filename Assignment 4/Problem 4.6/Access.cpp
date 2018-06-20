/*
    CH08-320143
    a4 p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <map>
#include "Access.h"

void Access::activate(unsigned int code, unsigned int level)
{
    std::map<unsigned int, unsigned int>::iterator iter;
    iter = codes.find(code);
    //checks if coded is already in the system
   if(iter == codes.end())
    {
        codes.insert(std::pair<unsigned int, unsigned int>(code, level));
    }
    else
    {
        std::cerr << "Code is already in the system." << std::endl;
        return;
    }
        
}

void Access::deactivate(unsigned int code)
{
    std::map<unsigned int, unsigned int>::iterator iter;
    iter = codes.find(code);
    
    //Removes code from database if found
    if(iter != codes.end())
    {
        codes.erase(code);
    }
}

bool Access::isactive(unsigned int code, unsigned int level) const
{
    std::map<unsigned int, unsigned int>::const_iterator iter;
    iter = codes.find(code);

    if(iter != codes.end())
    {
        if(codes.find(code)->second >= level)
        {
            return true;
        }
    }

    return false;
}