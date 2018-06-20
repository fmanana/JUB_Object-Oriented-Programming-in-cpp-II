/*
    CH08-320143
    a4 p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vint;
    vector<int>::iterator viter = vint.begin();
    int i;
    
    //Assigning elements to vector
    for(i = 1; i <= 30; i++)
    {
        vint.push_back(i);
    }
    
    //Pusing 5 to the end
    vint.push_back(5);
    
    //Reversing vector
    reverse(vint.begin(), vint.end());
    
    //Printing using iterator
    for(viter = vint.begin(); viter != vint.end(); viter++)
    {
        cout << *viter << " ";
    }
    cout << endl;

    //Replacing 5 with 129
    replace(vint.begin(), vint.end(), 5, 129);

    for(viter = vint.begin(); viter != vint.end(); viter++)
    {
        cout << *viter << " ";
    }
    cout << endl;

    return 0;
}