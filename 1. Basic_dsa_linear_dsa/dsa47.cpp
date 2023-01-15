// Code to print any 2D array spirally..

#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;

    int f_R = 0;
    int f_C = 0;

    int R;
    int C;

    cout << "Enter the no of row and col : ";
    cin >> R >> C;

    int IndL_r = R - 1;
    int IndL_c = C - 1;

    int array[R][C];

    int total_element = R * C;
    cout << "Enter the elements in the matrix which has " << total_element << " elements : ";

    for (int index = f_R; index <= IndL_r; index++)
    {
        for (int j = f_C; j <= IndL_c; j++)
        {
            cin >> array[index][j];
        }
    }
    for (int index = f_R; index <= IndL_r; index++)
    {
        for (int j = f_C; j <= IndL_c; j++)
        {
            cout << array[index][j] << " ";
        }
        cout << endl;
    }

    while (cnt < total_element)
    {
        for (int index = f_C; index <= IndL_c && cnt < total_element; index++)
        {
            cout << array[f_R][index] << " ";
            cnt++;
        }
        f_R++;

        for (int index = f_R; index <= IndL_r && cnt < total_element; index++)
        {
            cout << array[index][IndL_c] << " ";
            cnt++;
        }
        IndL_c--;

        for (int index = IndL_c; index >= f_C && cnt < total_element; index--)
        {
            cout << array[IndL_r][index] << " ";
            cnt++;
        }
        IndL_r--;

        for (int index = IndL_r; index >= f_R && cnt < total_element; index--)
        {
            cout << array[index][f_C] << " ";
            cnt++;
        }
        f_C++;
    }
}