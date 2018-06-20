/*
    CH08-320143
    a4 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <set>

class Access
{
    public:
        Access(){};
        ~Access(){};
        void activate(unsigned int code);
        void deactivate(unsigned int code);
        bool isactive(unsigned int code) const;
    private:
        //Using set STL container so double entries won't occur
        std::set<unsigned int> codes;
};
