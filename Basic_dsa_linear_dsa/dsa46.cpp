// code to print sine wave pattern (meaning for even index col print the col top to bottom and for odd no of col print col bottom to top)
// For input {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
// output will be {1, 5, 9, 10, 6, 2, 3, 7, 11, 12, 8, 4}..
#include <iostream>
#include <vector>
using namespace std;

void sineWave(int arr[][4], int row, int col)
{
    vector<int> d;
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                // d.push_back(arr[i][j]);
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                // d.push_back(arr[i][j]);
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int array[3][4];
    cout << "Enter the elements of the array..";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> array[i][j];
        }
    }

    sineWave(array, 3, 4);
}