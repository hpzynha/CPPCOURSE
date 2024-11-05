#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];

    myArray[0] = 10;
    myArray[1] = 15;
    myArray[2] = 20;
    myArray[3] = 25;
    myArray[4] = 30;

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << myArray[i] << endl;

    }
    return 0;
}