// Two Dimensional array.. ( 2-D array..)

#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];

    /*

    method of input --> Row wise input taking..

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    */

    for (int j = 0; j < 4; j++) // method of input --> Column wise input taking..
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}