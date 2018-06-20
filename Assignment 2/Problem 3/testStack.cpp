/*
    CH08-320143
    a2_p3.cpp
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
    intstack.push(15);

    //Getting number of entries
    intstack.getNumEntries();
    
    //Calling back
    intstack.back();
    
    //Should true(1) as there are still elements left to pop
    intstack.pop(out_int);
    
    //Get number of elements
    intstack.getNumEntries();
   
    intstack.getSize();

    //Resizing
    intstack.resize(5);

    intstack.getSize();

    return 0;
}