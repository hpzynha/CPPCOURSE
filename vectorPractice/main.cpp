#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector <string> names(5);

    names[0] = "Larissa";
    names[1] = "Gabi";
    names[2] = "Tany";
    names[3] = "Rafaela";
    names[4] = "Julia";

       // change the name 3 to john
    names[3] = "John";
    //delete the last name
    names.pop_back();


    for(string name : names)
    {
        cout << name << endl;
    }

    //Other way of doing it

    vector <string> randomNames;

    randomNames.push_back("Larissa");
    randomNames.push_back("Orange");
    randomNames.push_back("Sushi");
    randomNames.push_back("Hozie");
    randomNames.push_back("Stella");

    randomNames.insert(randomNames.begin() + 2, "John Baugh");

    randomNames.pop_back();

    for(string name : randomNames)
    {
        cout << name << endl;   
    }


    return 0;
}