/*
    CH08-320143
    a3 p1.cpp
    Fezile Manana
    f.mananan@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input;
    vector<string> v;

    cin >> input;
    while(input != "END")
    {
        v.push_back(input);
        cin >> input;
    }

    //Printing using index operator
    unsigned int i;
    for(i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //Printing using iterator
    vector<string>::iterator it;
    for(it = v.begin(); it != v.end(); it++)
    {
        if(it < v.end()-1)
        {
            cout << *it << ",";
        }
        else
        {
            cout << *it;
        }
    }

    cout << endl;

    return 0;
}