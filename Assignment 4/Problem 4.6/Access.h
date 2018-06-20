/*
    CH08-320143
    a4 p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <map>

class Access
{
    public:
        Access(){};
        ~Access(){};
        void activate(unsigned int code, unsigned int level);
        void deactivate(unsigned int code);
        bool isactive(unsigned int code, unsigned int level) const;
    private:
        //Using set STL container so double entries won't occur
        std::map<unsigned int, unsigned int> codes;
};
