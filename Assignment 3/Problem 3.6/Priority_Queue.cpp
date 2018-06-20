/*
    CH08-320143
    a3 p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class compare_func
{
    public:
        bool operator()(float const& a, float const& b);
};

bool compare_func::operator()(float const& a, float const& b)
{
    //comparison funciton returns the number with
    //the greatest absolute value
    if(a*a < b*b)
        return true;
    else
        return false;
}
int main()
{
    priority_queue<float, vector<float>, compare_func> pq;

    pq.push(123.23);
    pq.push(321.43);
    pq.push(-755.545);
    pq.push(-12.45);
    pq.push(47.76);

    cout << "Number of elements in queue: " << pq.size() << endl;
    
    //Should print the values in order of greatest absolute value
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}