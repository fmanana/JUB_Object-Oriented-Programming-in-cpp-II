/*
    CH08-320143
    a4 p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Access.h"

using namespace std;

int main()
{
    Access A;

    // 2. Activating codes
    A.activate(1234, 1);
    A.activate(9999, 5);
    A.activate(9876, 9);

    int attempt;
    cout << "Enter your code:" << endl;
    scanf("%d", &attempt);

    while(1)
    {
        if(A.isactive(attempt, 5))
        {
            cout << "Door opened successfully." << endl;
            //Deactivating code that worked
            A.deactivate(attempt);
            break;
        }
        else
        {
            cout << "Access denied. Try again." << endl;
            scanf("%d", &attempt);
        }
    }
    
    //Chagning level of 9999
    A.deactivate(9999);
    A.activate(9999, 8);

    A.activate(1111, 7);
    
    cout << "Enter your code:" << endl;
    scanf("%d", &attempt);

    while(1)
    {
        if(A.isactive(attempt, 7))
        {
            cout << "Door opened successfully." << endl;
            break;
        }
        else
        {
            cout << "Access denied. Try again." << endl;
            scanf("%d", &attempt);
        }
    }

    return 0;
}