#include <iostream>

using namespace std;

int main()
{
    char unidadeDeEntrada, unidadeDeSaida;
    double temperatura, temperaturaConvertida;

    cout << "Convertor de Temperatura." <<endl;
    cout << "Escolha a unidade de temperatura de entrada (C = Celsius, F = Fahrenheit, K = Kelvin)"<<endl;
    cin >> unidadeDeEntrada;

    cout << "Escolha a unidade de temperatura de saida (C = Celsius, F = Fahrenheit, K = Kelvin)"<<endl;
    cin >> unidadeDeSaida;

    cout<< "Digite a temperatura: "<<endl;
    cin>> temperatura;

    unidadeDeEntrada = toupper(unidadeDeEntrada);
    unidadeDeSaida = toupper(unidadeDeSaida);

    if(unidadeDeEntrada == 'C' && unidadeDeSaida == 'F'){
        temperaturaConvertida = (temperatura * 9/5) + 32;
        
    } else if (unidadeDeEntrada == 'C' && unidadeDeSaida ==  'K'){
        temperaturaConvertida = (temperatura + 273.15);
        
    } else if ( unidadeDeEntrada == 'F' && unidadeDeSaida == 'C'){
        temperaturaConvertida = (temperatura - 32) * 5 / 9; 

    } else if (unidadeDeEntrada == 'F'  && unidadeDeSaida == 'K') {
        temperaturaConvertida = (temperatura - 32) * 5 / 9 + 273.15;

    } else if (unidadeDeEntrada == 'K' && unidadeDeSaida == 'C'){
        temperaturaConvertida = temperatura - 273.15;

    } else if (unidadeDeEntrada == 'K'  && unidadeDeSaida == 'F'){
        temperaturaConvertida = (temperatura - 273.15) * 9 / 5 + 32;

    } else {
        cout << "Conversão invalida tente novamamente" <<endl;
        return 1;
    }

    cout<< "Temperatura convertida: " << temperaturaConvertida << "° " << unidadeDeSaida <<endl;
    
    return 0;
}