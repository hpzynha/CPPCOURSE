#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    vector <int> numbers;
    int num;

    cout << "Enter a non-negative number (negative to quit): " << endl;
    cin >> num;

    while (num >= 0 ){
        numbers.push_back(num);
        cout << "Enter a non-negative number (negative to quit): " << endl;
        cin >> num;
    }

    cout << "Twice the value of each entered number " << endl;

    for(int val : numbers){
        cout << val * 2 << " ";

    }
    cout << endl;

    return 0;
}