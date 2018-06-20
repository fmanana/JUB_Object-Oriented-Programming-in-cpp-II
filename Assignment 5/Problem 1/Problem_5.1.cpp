/*
    CH08-320143
    a5 p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main()
{
    vector<int> vint;
    //Adding the value 8 20 times
    for(int i = 0; i < 20; i++)
        vint.push_back(8);

    try
    {
        vint.at(20) = 21;
    }
    catch (const out_of_range& oor)
    {
        cerr << "Out of range error: " << oor.what() << endl;
    }

    return 0;
}