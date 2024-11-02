#include <iostream>
using namespace std;

int main()
{
    char packageChoice;
    int totalJams;
    double totalCost = 0;

    cout << "Welcome to the Jam club"<< endl;
    cout << "Please choose your package"<< endl;
    cout << "Package A = $8 per month, includes 2 jams. Each aditional Jam is $5 each" <<endl;
    cout << "Package B = $12 per month, includes 4 jams. Each aditional Jam is $4 each" <<endl;
    cout << "Package C = $15 per month, includes 6 jams. Each aditional Jam is $3 each" <<endl;
    cout << "Enter your package choice (A, B or C): " <<endl;
    cin >> packageChoice;

    cout << "Enter the total number of jams you would like this month"<<endl;
    cin >> totalJams;

    //calcula o custo com base no pacote escolhido e na quantidad de jams

    switch(packageChoice)
    {
        case 'A':
        case 'a':
            totalCost = 8;
            if(totalJams > 2){
                totalCost += (totalJams - 2)* 5;
            }
            break;
        case 'B':
        case 'b':
            totalCost = 12;
            if(totalJams > 4){
                totalCost += (totalJams - 4) * 4;
            }
            break;
        case 'C':
        case 'c':
        totalCost = 15;
        if(totalJams > 6){
            totalCost += (totalJams - 6) * 3;
        }
        break;

        default:
            cout << "Invalid package choice. Please restart the program and choose A, B, or C."<<endl;
            return 1;
            
    }

        cout<< "Your total cost for the month is: " << totalCost <<endl;

    return 0;

}