/*
    CH08-320143
    a4 p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream fp;
    //Map is of type (string, string) as birthday format is unspecified
    map<string, string> database;

    string name;
    string Bday;

    fp.open("data.txt");
    if(!fp)
    {
        cerr << "Error opening file." << endl;
    }

    //Reading names and birthdays and putting them into the map
    while(!fp.eof())
    {
        getline(fp, name);
        getline(fp, Bday);
        database.insert(pair<string, string>(name, Bday));
    }

    string query;
    cout << "Enter a name:" << endl;
    getline(cin, query);

    map<string, string>::iterator iter;
    iter = database.find(query);

    if(iter == database.end())
        cout << "Name not found!" << endl;
    else
        cout << database.find(query)->second << endl;

    return 0;
}