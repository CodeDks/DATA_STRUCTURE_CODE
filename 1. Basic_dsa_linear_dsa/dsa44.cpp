// Printing sum of rows of 2D array..

#include <iostream>
using namespace std;

void printsum(int array[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + array[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int array[3][3];
    cout << "Enter the elements..";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }

    printsum(array, 3, 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }
}
