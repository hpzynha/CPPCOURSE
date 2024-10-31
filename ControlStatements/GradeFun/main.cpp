#include <iostream>
using namespace std;

int main()
{   

    char grade;

    cout<< "Please enter a letter Grade"<<endl;
    cin>> grade;

    //convertendo a letra para maiúscula
    grade = toupper(grade);

    switch (grade)
    {
        case 'A': 
            cout <<"Greate Job"<<endl;
            break;
        case 'B':
            cout << "Good Job"<<endl;
            break;
        case 'C':
            cout <<"You can do better"<< endl;
            break;
        case 'D':
            cout << "You are getting close to falling"<<endl;
            break;
        case 'F':
            cout <<"You are failling the Course"<<endl;
            break;
        default:
            cout <<"You have entered an invalid grade. Try again"<<endl;
    }

    return 0;
}