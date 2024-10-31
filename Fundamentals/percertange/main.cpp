#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    string location;
    int initialScore;

    cout << "Please enter your full Name: "<<endl;
    getline(cin, fullName);

    cout <<"Please enter your City, State and Country: "<<endl;
    getline(cin, location);

    cout<< "Please give a score: "<<endl;
    cin >> initialScore;

    cout<< "Hello "<< fullName<<endl;
    cout<< "We heard you are from 0 - 10" <<location<<endl;
    cout<< "Your initial score is: ," <<initialScore<< 
    "but with five points added, your score is: "<< (initialScore + 5 )<<endl;

    return 0;
}