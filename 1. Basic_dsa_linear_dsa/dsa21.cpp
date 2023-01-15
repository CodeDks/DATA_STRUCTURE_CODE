// Sorting 0's and 1's..

/*
   int arr[8] = {0,1,0,1,0,0,1,0}
   Agar koi array aisa hh toh usse

   int arr[8] = {0,0,0,0,0,1,1,1}
   toh aisa karna hh..

*/

#include <iostream>
using namespace std;

void SortArray(int array[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (array[i] == 0)
        {
            i++;
        }

        else if (array[j] == 1)
        {
            j--;
        }

        else
        {
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }
}

void PrintArr(int arrd[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arrd[i] << " ";
    }
}

int main()
{
    int arr[10] = {0, 1, 0, 1, 0, 0, 1, 0, 0, 1};

    SortArray(arr, 10);
    PrintArr(arr, 10);
}