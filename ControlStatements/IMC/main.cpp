#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double peso, altura, IMC;

    cout << "Calculadora IMC"<<endl;

    cout << "Por favor insira aqui seu peso: " <<endl;
    cin>> peso;

    cout << "Por favor insira aqui sua altura: "<<endl;
    cin>> altura;

    IMC = peso / pow(altura,2);

    cout << fixed << setprecision(2);

    if(IMC <= 18.5){
        cout << "Seu IMC é: " <<IMC << "Você está abaixo do peso" <<endl;
    } else if ( IMC >= 18.6 && IMC <= 24.9){
        cout << "Seu IMC é: " <<IMC << "Você está com peso nomal" <<endl;
    } else if(IMC >= 25 && IMC <= 29.9){
        cout << "Seu IMC é: " <<IMC << "Você está com sobre peso" <<endl;
    } else if (IMC >= 30){
        cout << "Seu IMC é: " <<IMC << " Você está com obesidade" <<endl;
    } 

    return 0;
}