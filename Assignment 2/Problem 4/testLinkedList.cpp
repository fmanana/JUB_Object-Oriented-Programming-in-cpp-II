/*
    CH08-320143
    a2 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    int arr[] = {7, 5, 12, 43, 78};

    //Initailising the list with values in the array
    double_linked<int> list (arr);
    list.push_back(11);
    list.push_front(100);
    while(list)
        cout << list.pop_back()  << " ";
}