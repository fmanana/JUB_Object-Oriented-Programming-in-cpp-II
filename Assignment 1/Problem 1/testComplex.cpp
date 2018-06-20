/*
    CH08-320142
    a3_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main(){

    Complex a, b;
    
	ifstream input1("in1.txt");
	ifstream input2("in2.txt");
	
	if(!input1.good())
	{
		cerr << "Error opening in file." << endl;
		exit(1);
	}
	
	if(!input2.good())
	{
		cerr << "Error opening in2 file." << endl;
		exit(1);
	}
	
	input1 >> a;
	input2 >> b;
	
	
	ofstream output("output.txt");
	if(!output.good())
	{
		cerr << "Error opening output file." << endl;
		exit (1);
	}
	output << a + b;
	
	input1.close();
	input2.close();
	output.close();

    return 0;
}