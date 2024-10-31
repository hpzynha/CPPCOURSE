#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string fullName;
    cout << "Please enter your age: "<<endl;
    cin >> age;
    cout << age <<endl;
    cin.ignore();

    cout << "Please enter your Full Name: "<<endl;
    getline(cin, fullName);
    cout << fullName<<endl;



    return 0;
}