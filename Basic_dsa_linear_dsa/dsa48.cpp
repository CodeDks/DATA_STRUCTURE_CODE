// Rotate an 2D array by 90 degree..

#include <iostream>
using namespace std;

int main()
{
    int rcnt;
    int ccnt;

    cout << "Enter the no of row and col : ";
    cin >> rcnt >> ccnt;

    int array[rcnt][ccnt];

    int f_r = 0;
    int l_r = rcnt - 1;

    int f_c = 0;
    int l_c = ccnt - 1;

    int cnt = 0;
    int total_element = rcnt * ccnt;

    cout << "Enter the array which has " << total_element << " element : ";

    for (int i = f_r; i <= l_r; i++)
    {
        for (int j = f_c; j <= l_c; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = f_r; i <= l_r; i++)
    {
        for (int j = f_c; j <= l_c; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << " Array after rotating 90 degree clockwise is : " << endl;
    while (cnt < total_element && f_c <= l_c)
    {
       for (int index = l_r; index >= f_r; index--)
       {
        cout << array[index][f_c] << " ";
        cnt++;
       }
       f_c++;
       cout << endl;
    }
}