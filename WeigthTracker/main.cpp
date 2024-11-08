#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<string> names(5);
    vector<double> weights(5);

    for(int i = 0; i < 5; i++){

        cout << "Enter the name of a person " << (i + 1) << ": ";
        getline(cin, names[i]);

        cout << "Enter weight of " << names[i] << "in Kg: ";
        cin >> weights[i];

        cin.get();
    }

    cout << "\nPeople and their weights:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << names[i] << " Weighs " << weights[i] << " Kg" << endl;

    }

    return 0;
}
