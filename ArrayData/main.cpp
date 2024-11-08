#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 5;
    array<int, ARRAY_SIZE> numbers;

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter a interger number ("<< i + 1<<"/5): " << endl;
        cin >> numbers[i];
    }

    cout << "Number multiple by 2: " << endl;
    for(int num : numbers){
        cout << num * 2 << " ";
    }
    cout << endl;

    return 0;
}