#include <iostream>
using namespace std;

int main()
{
    int initialNumber;
    int finalNumber;

    cout << "Please enter a initial number: " <<endl;
    cin>> initialNumber;
    cout << "Please enter a final number: "<< endl;
    cin >> finalNumber;

    if(initialNumber % 2 == 0)
    {
        cout<< initialNumber << " is divided by 2" <<endl;
    } else
    {
        cout <<initialNumber << " is not divided by 2"<<endl;
    }

     if(finalNumber % 2 == 0)
    {
        cout<< finalNumber <<" is divided by 2"<<endl;
    } else
    {
        cout <<finalNumber << " is not divided by 2" << endl;
    }
    return 0;
}