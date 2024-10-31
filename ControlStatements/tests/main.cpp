#include <iostream>
using namespace std;

int main()
{
    int dia = 3;

    switch (dia){
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-Feira" << endl;
            break;
        case 3:
            cout << "Terça-Feira" << endl;
            break;
        default:
            cout << "Outro dia" << endl;
    }

    return 0;
}