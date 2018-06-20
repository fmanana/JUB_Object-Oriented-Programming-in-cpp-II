/*
    CH08-320143
    a2_p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack<int> intstack;
    int out_int;

    //Assigning values to the first 10 elements
    //in the stack
    int i;
    for(i = 0; i < 10; i++)
    {
        intstack.push(i+1);
    }
    
    //Overload the stack and let it fail. Check should be false (0)
    cout << intstack.push(15) << endl;

    //Getting number of entries
    intstack.getNumEntries();
    
    //Calling back
    intstack.back();
    
    //Should true(1) as there are still elements left to pop
    cout << intstack.pop(out_int) << endl;
    
    //Get number of elements
    intstack.getNumEntries();
   

    return 0;
}