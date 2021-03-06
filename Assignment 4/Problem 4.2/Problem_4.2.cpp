/*
    CH08-320143
    a4 p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <cmath>
#include <set>

using namespace std;

int main()
{
    set<int> lotto;
    int draw;
    //Inititalising random number generator
    srand(time(0));
    
    //While the size of the set is less than 7
    while(lotto.size() < 6)
    {
        draw = rand() % 49 +1;
        lotto.insert(draw);
    }
    
    //Set is already internally sorted so just print
    set<int>::iterator siter;
    for(siter = lotto.begin(); siter != lotto.end(); siter++)
    {
        cout << *siter << " ";
    }
    cout << endl;
    

    return 0;
}
