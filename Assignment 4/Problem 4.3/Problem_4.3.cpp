/*
    CH08-320143
    a4 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
int main()
 {
    set<int> A;
    multiset<int> B;
    int input;

    scanf("%d", &input);

    while(input > 0)
    {
        A.insert(input);
        B.insert(input);

        scanf("%d", &input);
    }

    set<int>::iterator iter;
    //5. Printing set A
    cout << "Set A: ";
    for(iter = A.begin(); iter != A.end(); iter++)
    {
        cout << *iter << " ";
    }
    
    //Empty line
    cout << endl << endl;

    //5. Printing set B
    cout << "Mutiset B: ";
    for(iter = B.begin(); iter != B.end(); iter++)
    {
        cout << *iter << " ";
    }
    //6. New line
    cout << endl << endl;

    //7. Removing the value 5
    for(iter = A.begin(); iter != A.end(); iter++)
    {
        if(*iter == 5)
        {
            A.erase(iter);
        }
    }
    //7. Removing the value 5
    for(iter = B.begin(); iter != B.end(); iter++)
    {
        if(*iter == 5)
        {
            B.erase(iter);
        }
    }

    cout << "Set A: ";
    for(iter = A.begin(); iter != A.end(); iter++)
    {
        cout << *iter << " ";
    }

    cout << endl << endl;

    cout << "Multiset B: ";
    for(iter = B.begin(); iter != B.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    //9. Inserting 14 and 198 into A
    A.insert(14);
    A.insert(198);

    set<int> uni;
    set<int>::iterator it;
    //10. Finding the union
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(uni, uni.begin()));
    
    cout << "Union: ";
    for(it = uni.begin(); it != uni.end(); it++)
    {
        cout << *it << " ";
    }
    
    cout << endl << endl;

    set<int> intersection;
    set<int>::iterator it2;
    //11. Finding the intersection
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(intersection, intersection.begin()));
    
    cout << "Intesection: ";
    for(it2 = intersection.begin(); it2 != intersection.end(); it2++)
    {
        cout << *it2 << " ";
    }
    cout << endl;

    set<int> diff;
    set<int>::iterator it3;
    //12. Finding the set difference
    set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(diff, diff.begin()));
    
    cout << "Set difference: ";
    for(it3 = diff.begin(); it3 != diff.end(); it3++)
    {
        cout << *it3 << " ";
    }    
    cout << endl;

    set<int> sym;
    set<int>::iterator it4;
    //13. Finding symmetric difference
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(diff, diff.begin()));
    
    cout << "Symmetric difference: ";
    for(it4 = sym.begin(); it4 != sym.end(); it4++)
    {
        cout << *it4 << " ";
    }    
    cout << endl;

    
    return 0;
}