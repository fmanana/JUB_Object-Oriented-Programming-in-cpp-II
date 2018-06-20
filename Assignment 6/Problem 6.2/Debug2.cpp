/*
    CH08-320143
    a6 p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <sstream>
using namespace std;

void foo(int *array, int n, int *positives) {
	for(int i=0; i<n; i++)
		if (array[i]>0)
			*positives += 1;
}

class Test {
	private:
		int *a;
		int n;
	public:
		Test() {
			a=NULL;
			n=0;
		}
		Test(int *a, int n) {
			this->n = n;
			if (this->a != NULL) {
				delete this->a;
			}
			this->a = new int[n];
			for(int i=0; i<n; i++)
				this->a[i] = a[i];
		}
		string toString() {
			ostringstream ss;
			ss << "Length: " << n << endl << "Elements: ";
			for(int i=0; i<n; i++)
				ss << a[i] << " ";
			ss << endl;
			return ss.str();
		}
		~Test() {
			delete a;
		}
};

int main() {
	int v[3] = {1, 2, 3};
	int p=0;
	foo(v, 3, &p);
	cout << "Amount of positive values in the array=" << p << endl;
	Test arr[5];
	Test *obj1;
	obj1=&arr[0];
	Test *obj2=new Test(v, 3);
	Test *obj3 = new Test(nullptr, 0);;
	cout << obj1->toString();
	cout << obj2->toString();
	cout << obj3->toString();
    
	delete obj2;
	delete obj3;
	return 0;
}
/*
    Debugger detected a double free or corruption. Meaning a possible deallocation
    of non dynamically allocated memory. First object is statically allocated and doesn't need
    to be deleted. Break point created on line 51 as the output for length was -1950333.
    Pressing next until line 54 is reached. Print obj3 to show p obj3.n = -1950333. obj3 is declaraed but uninitialised
    therefore it does not have an n in the class as the default constructor isn't called until it
    is initialised. Therefore, obj3 enters toString with an uninitialised value of n, printing a
    random value.

    Foo is not printing the correct number of positive elements. Break point at function foo.
    For the first iteration of the first loop i is 0 and positives = 0. In the second iteration
    i = 1 and positives = -136501120. Therefore, positives is not being incremented correctly. It is
    incrementing the pointer, not the content.
*/