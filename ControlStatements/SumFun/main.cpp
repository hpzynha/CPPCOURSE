#include <iostream>
using namespace std;

int main()
{
    int input;
    int sum = 0;

    cout << "Please enter a interger number to continur" <<endl;
    cout << "Or, a negative number to quite" << endl;
    cin >> input;
    
    while(input >=0 )
    {
        sum += input;
        cout <<"Current sum: " << sum <<endl;
        cout << "Please enter a interger number to continur" <<endl;
        cout << "Or, a negative number to quite" << endl;

        cin>>input;

    }
        cout << "sum of inputs: " << sum <<endl;
        

    return 0;
}