#include <iostream>
using namespace std;

int main()
{
    int age;
    char gender;


    cout<< "Please enter your age: "<<endl;
    cin >> age;

    cout<< "Please enter your gender M or F "<<endl;
    cin>> gender;
    gender = toupper(gender);

    if (age >= 60 && gender == 'F'){
        cout<< "You qualify for the discount"<<endl;
    } 
    else
    {
        cout<< "You donnot qualify for the discount"<<endl;
    }

    return 0;
}