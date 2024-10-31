#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << boolalpha;

    bool isRaining = false;
    bool isWarm = false;

    cout <<"And = "<< (isRaining && isWarm)<<endl;
    cout<<"OR = "<< (isRaining || isWarm)<<endl;
    cout<<"Not = "<< (!isRaining)<<endl;

    return 0;
}