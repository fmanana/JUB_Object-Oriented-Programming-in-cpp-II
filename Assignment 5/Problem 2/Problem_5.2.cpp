/*
    CH08-320143
    a5 p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <stdexcept>

using namespace std;

class OwnException: public exception
{
    private:
        string message;

    public:
        OwnException(const char* str){};
        OwnException();
        ~OwnException(){};
        const char* what() const throw() {return "OwnException";};
};

void Exceptions(int p)
{
    if(p == 1)
        throw 'a';
    else if(p == 2)
        throw 12;
    else if(p == 3)
        throw true;
    else
        throw OwnException("Default case exception\n");
}

int main()
{
    srand((unsigned) time(0));
    int call = rand() % 4 + 1;

    try
    {
        /*  Calling random value from 1 to 4 so a different
            exeption is thrown whenever the program is run
        */
        Exceptions(call);
    }
    catch(const char a)
    {
        cerr << "Caught in main: " << a << endl;
    }
    catch(const int b)
    {
        cerr << "Caught in main: " << b << endl;
    }
    catch(bool c)
    {
        cerr << "Caught in main: " << c << endl;
    }
    catch(OwnException d)
    {
        cerr << d.what() << endl;
    }

    return 0;
}