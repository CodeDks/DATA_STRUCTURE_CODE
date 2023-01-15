// Quick sort..

#include <iostream>
using namespace std;

int partion(int arrd[], int s, int e)
{
    int pivot = arrd[s]; // starting element element of array is pivot..
    int cnt = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arrd[i] < pivot)
        {
            cnt++;
        }
    }

    // placing pivot at it's right position..
    int pivotIndex = cnt + s;
    swap(arrd[s], arrd[pivotIndex]);

    // pivot ke left and right wale part ko sambhal lete hh..
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arrd[i] < pivot)
        {
            i++;
        }
        while (arrd[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j < pivotIndex)
        {
            swap(arrd[i], arrd[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partion(arr, s, e);

    // left part ko sort karna hh
    quickSort(arr, s, p - 1);

    // Right wale part ko sort karna hh..
    quickSort(arr, p + 1, e);
}

int main()
{
    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;

    quickSort(array, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
