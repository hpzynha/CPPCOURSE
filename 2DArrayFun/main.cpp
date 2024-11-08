#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int myNums[2][3]{
        {1, 2, 3},
        {4, 5, 6},
    }; //2D array that is 2 * 3 (2 rows and 3 columns)

    cout << myNums[0][2] << endl;

    myNums[1][0] = 14;

    cout << myNums[1][0] << endl;

    for(int row = 0; row < 2; row++){
        for(int column = 0; column < 3; column++){
            cout << myNums[row][column] << " ";     
        }
        cout << endl;
    }

    for(int row = 1; row >= 0; row--){
        for(int col = 2; col >= 0; col--){
            cout << myNums[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}