#include <iostream>
/*
    CH08-320143
    a3 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <algorithm>
#include <list>
#include <fstream>

using namespace std;

int main()
{
    //1. Creating lists
    list<int> A;
    list<int> B;
    int input;

    cin >> input;
    while(input > 0)
    {
        A.push_back(input);
        B.push_front(input);
        cin >> input;
    }

    //5. Printing to the standard output
    list<int>::iterator it;
    cout << "List A:" << endl;
    for(it = A.begin(); it != A.end(); it++)
    {
        cout << *it << " ";
    }
    
    ofstream fp;
    fp.open("listB.txt", ios::out);
    //Checking if file was successfully opened
    if(!fp)
    {
        cerr << "Error opening file!" << endl;
    }
    //5. Printing to file
    for(it = B.begin(); it != B.end(); it++)
    {
        fp << *it << " ";
    }

    //6. Printing empty line
    cout << endl;
    
    //7. Moving first element to the end
    A.push_back(*(A.begin()));
    A.pop_front();
    B.push_back(*(B.begin()));
    B.pop_front();

    //8. Printing A
    cout << "List A after move:" << endl;
    for(it = A.begin(); it != A.end(); it++)
    {
        if(it != A.end())
        {
            cout << *it << ",";
        }
        else
            cout << *it;
    }
    cout << endl;

    //8. Printing B
    cout << "List B after move:" << endl;
    for(it = B.begin(); it != B.end(); it++)
    {
        if(it != B.end())
        {
            cout << *it << " ";
        }
        else
            cout << *it;        
    }
    cout << endl;

    //9. Printing an empty line
    cout << endl;

    //10. Merging lists
    A.merge(B);

    A.sort(less<int>());
    //11. Printing sorted list A
    for(it = A.begin(); it != A.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}