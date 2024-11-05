#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> myIntArray{};

    myIntArray[0] = 5;
    myIntArray[1] = 1;
    myIntArray[2] = 4;
    myIntArray[3] = 9;
    myIntArray[4] = 13;

    for(int a : myIntArray)
    {
        cout << a << endl;
    }

    cout << "Size of array: " << myIntArray.size() << endl;

    return 0;
}