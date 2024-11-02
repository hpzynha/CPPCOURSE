#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr)); //current system time
    
    // int val1 = rand() % 10; //val 1 will be >=0 and <10

    // //shift it

    // int val2 = rand() % 10 + 1; //val2 is >=1 and <=10

    // cout << val1 << endl;
    // cout << val2 << endl;

    cout << "Rolling a 6-side die 10 times"<< endl;

    for (int i = 1; i <=10; i++)
    {
        int roll = rand() % 6 + 1;
        cout << "Roll" << i << ": " << roll << " dots" << endl;
    }
    return 0;
}
