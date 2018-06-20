/*
    CH08-320143
    a3 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
    //1. Creating deque of floats
    deque<float> A;
    float input;

    //2. Reading floats
    cin >> input;
    
    //3. Assigning elements to A and B
    while(input != 0)
    {
        if(input > 0)
        {
            A.push_back(input);
        }
        else if(input < 0)
        {
            A.push_front(input);
        }
        cin >> input;
    }

    deque<float>::iterator it;
    cout << "Printing A:" << endl;
    //4. Printing A to standard output
    for(it = A.begin(); it != A.end(); it++)
    {
        if(it != A.end()-1)
            cout << *it << " ";
        else
            cout << *it;
    }
    cout << endl;

    //5. Printing an empty line
    cout << endl;

    //6. Incrementing iterator while the content is negative
    it = A.begin();
    while(*it < 0)
    {
        it++;
    }
    //6. Inserting iterator
    A.insert(it, 0);

    //7. Printing A after insertion
    cout << "After insert:" << endl;
    for(it = A.begin(); it != A.end(); it++)
    {
        if(it != A.end()-1)
            cout << *it << ":";
        else
            cout << *it;
    }
    cout << endl;

    return 0;
}