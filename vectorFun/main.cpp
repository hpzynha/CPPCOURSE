#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <int> someVec;
    vector <string> anotherVec(3);

    someVec.push_back(1);
    someVec.push_back(1);
    someVec.push_back(1);


    cout << "SomeVec size: " << someVec.size() << endl;

    anotherVec[0] = "Lari";
    anotherVec[1] = "John";
    anotherVec[2] = "Bob";

    anotherVec.push_back("Tany");

    for(int val : someVec)
    {
        cout << val << endl;
    }
    cout << endl;

    for(string name : anotherVec)
    {
        cout << name << endl;
    }

    cout << "Front and Back: " << endl;
    cout << "Front: " << anotherVec.front() << endl;
    cout << "Back: " << anotherVec.back() << endl;

    anotherVec.pop_back();
    anotherVec.insert(anotherVec.begin(), "Don");

    cout << "Now, front is: " << anotherVec.front() << endl;
    cout << "Now, back is: " << anotherVec.back() << endl;

    return 0;
}