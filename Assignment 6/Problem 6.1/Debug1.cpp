/*
    CH08-320143
    a6 p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
using namespace std;

int sum(int a[], int nr) {
	int s=0;
	for(int i=0; i< nr; i++)
		s+=a[i];
	return s;
}

unsigned int difference(unsigned int a, unsigned int b) {
	if (a < b)
		return b-a;
	else
		return a-b;
}

int main() {
	int n;
	cout << "n=";
	cin >> n;
	int v[n];
	cout << "Enter values for the array" << endl;
	for(int i=0; i<n; i++)
		cin >> v[i];
	int result = sum(v, n);
	cout << "Result=" << result << endl;
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "Difference=" << difference(x, y) << endl;
	return 0;
}
/* 
    For the sum function I created break point on line 7 "break 7".
    Then ran the program. When the break point was reaeched,
    I printed the iterator i and the sum s for every iteration
    (i.e. p i and p s then c to continue). For an array size of 3, the for loop
    runs 4 times, meaning it is accessing garbage values outside the array. So
    the stopping condition of the for loop needs to be modified.
*/

/*
    For the difference function, I created a break point at the
    function "difference". When the program asked for input, I 
    entered x = 5 and y = 10. The break point stopped on line 15
    despite the condition on line 12, meaning it wasn't entering
    the loop when b is larger than a. So condition is false. So the
    condition should be changed to if(a < b).
    Printing (a-b) shows the incorrect difference as well.
*/