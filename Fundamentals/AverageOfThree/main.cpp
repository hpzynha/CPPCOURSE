#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;
    double num3;

    double average;

    cout<< "Please choose 3 numbers, Please enter the first number: "<<endl;
    cin >> num1;
    cout<< "Please enter the second number: "<<endl;
    cin >> num2;
    cout<< "Please enter the third number: "<<endl;
    cin >> num3;

    average = (num1 + num2 + num3)/3;

    cout<< "The average between those number are: " << average<<endl;

    return 0;
}