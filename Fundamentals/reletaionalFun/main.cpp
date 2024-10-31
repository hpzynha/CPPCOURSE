#include <iostream>
using namespace std;

/*
    > greater than
    >= greater than or egual to
    < less than
    <= less than or egual to
    == egual to
    != not eguals to (equality)
*/

int main()
{

    cout<< boolalpha;

    int a = 15;
    int b = 20;

    bool areEqual =a ==b;

    int myAge = 16;


    cout<< (a<b)<<endl;

    cout<< areEqual<<endl;

    cout<< "Age >=21? "<< (myAge >=21)<<endl;

    return 0;
}