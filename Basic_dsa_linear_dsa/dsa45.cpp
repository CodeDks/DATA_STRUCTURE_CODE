// Code to find the index of the row which has maximum sum of its element's row..

#include <iostream>
using namespace std;

int Max_rowIndex(int arr[][4], int n, int m)
{
    int max = -2 ^ 31;
    int rowIndex = -1;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            rowIndex = i;
        }
        cout << "The sum " << i << " row is " << sum << endl;
    }
    return rowIndex;
}

int main()
{
    int array[3][4];
    cout << "Enter the elements of the array which has 12 elements..";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int index = Max_rowIndex(array, 3, 4);
    cout << index;
}