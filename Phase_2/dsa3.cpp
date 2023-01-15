// Creating 2D array dinamically.

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the row : ";
    cin >> row;

    int col;
    cout << "Enter the col :";
    cin >> col;

    // 2D array creation

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking output

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}