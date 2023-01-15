// Insertion sort..

#include <iostream>
using namespace std;

void sort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {
            if (array[j] > temp)
            { // shift right..
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
        }
        array[j + 1] = temp;
    }
}

void print(int arrd[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arrd[i] << " ";
    }
}

int main()
{
    int array[5] = {10, 9, 8, 7, 6};
    sort(array, 5);
    print(array, 5);
}