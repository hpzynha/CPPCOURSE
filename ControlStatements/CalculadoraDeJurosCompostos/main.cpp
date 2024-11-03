#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double P, r, n, t, A, PMT;

    double resultado;

    cout << "Calculadora de Juros compostos" <<endl;
    cout << "Insira seu capital inicial" <<endl;
    cin>> P;

    cout << "Insira a taxa de Juros Anual " <<endl;
    cin >> r;

    cout << "Insira quantos anos quer investir"<<endl;
    cin>> t;

    cout << "Insira o número de vezes que os juros são compostos por ano" <<endl;
    cin >> n;

    cout << " Insira o valor depositado mensalmente"<<endl;
    cin >> PMT;

    r = r / 100;

    A = P * pow((1 + r / n), n * t) + PMT * ((pow((1 + r / n), n * t) - 1) / (r /n));

    cout << "O valor futuro do investimento é: " << A << endl;

    return 0;
}