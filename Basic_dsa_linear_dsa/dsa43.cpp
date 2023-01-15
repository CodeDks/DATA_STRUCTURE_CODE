// Linear search in 2D array..

#include <iostream>
using namespace std;

bool search(int arr[][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int array[3][4];

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
            cout << array[i][j];
        }
        cout << endl;
    }
    int key;

    cout << endl
         << "Enter the key : ";
    cin >> key;

    bool found = search(array, 3, 4, key);
    if (found)
    {
        cout << "present..";
    }
    else
    {
        cout << "Error";
    }
}