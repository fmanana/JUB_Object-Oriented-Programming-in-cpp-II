/*
    CH08-320143
    a3 p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void swap(string& a, string& b)
{
    string helper = a;
    a = b;
    b = helper;
}
int main()
{
    string input;
    vector<string> v;

    getline(cin, input);

    while(input != "END")
    {
        v.push_back(input);
        getline(cin, input);
    }

    vector<string>::iterator it;
    if(v.size() >= 4)
    {
        swap(v[1], v[4]);
    }

    replace(v.end()-1, v.end(), *(v.end()-1), (string)"???");

     //Printing using index operator
    unsigned int i;
    for(i = 0; i < v.size(); i++)
    {
        if(v[i] != v[v.size()-1])
            cout << v[i] << ",";
        else
            cout << v[i] << endl;
    }

    //Printing using iterator
    for(it = v.begin(); it != v.end(); it++)
    {
        if(it < v.end()-1)
        {
            cout << *it << ":";
        }
        else
        {
            cout << *it << endl;
        }
    }
    //Printing in reverse order
    for(it = v.end()-1; it >= v.begin(); it--)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}