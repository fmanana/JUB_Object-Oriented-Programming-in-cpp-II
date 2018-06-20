/*
    CH08-320142
    a2_1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/


#include <iostream>
#include "Complex.h"

using namespace std;

template <typename T>
int array_search(T arr[], int size, T elem)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(arr[i] == elem)
			return i;
	}
	return -1;
}

int main()
{
	int check;
	int int_array[] = {1, 4, 2, 6, 4, 7, 12, 3};
	double double_array[] = {12.43, 34.32, 65.87, 65.654};

	Complex a(12, 43);
	Complex b(32, 13);
	Complex c(45, 21);
	Complex arr[] = {a, b, c};
	Complex d(11, 11);

	check = array_search(int_array, 8, 7);
	if(check != -1)
		cout << "The element was found in position " << check << endl;
	else
		cout << "The element is not in the array" << endl;

	check = array_search(double_array, 4, 12.43);
	if(check != -1)
			cout << "The element was found in position " << check << endl;
		else
			cout << "The element is not in the array" << endl;
	check = array_search(arr, 3, d);
	if(check != -1)
				cout << "The element was found in position " << check << endl;
			else
				cout << "The element is not in the array" << endl;

	return 0;
}