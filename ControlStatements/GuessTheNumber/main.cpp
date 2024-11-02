#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int tries = 0;

    cout << "Welcome to the Guess The Number"<< endl;
    cout << "I have selected a number between 1 and 100. Try to Guess it!!" <<endl;

    while(true)
    {
        cout << "Enter your guess"<<endl;
        cin >> guess;
        tries++;
        
        if(guess < 1 || guess > 100){
            cout << "Wasted guess! Pick a number between 1 and 100"<<endl;
            continue;
        }
        if( guess == secretNumber){
            cout << "Congratulations! You guessed it in " << tries << " tries" << endl;
        }
        else if(guess < secretNumber) {
            cout << "Your guess is to low"<<endl;

        } else {
            cout << "Your guess is to high"<<endl;
        }

    }
    return 0;
}