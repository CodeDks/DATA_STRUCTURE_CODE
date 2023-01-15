// Merge sort..

#include <iostream>
using namespace std;

void Merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    // creating 2 naya array..
    int len1 = mid - s + 1; // size of 1 array..
    int len2 = e - mid;     // size of 2 array..

    int *first = new int[len1];  // array creation using dynamic memory allocation..(fist array)
    int *second = new int[len2]; // second array..

    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++) // this loop will copy the data into first array from main array..
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for (int i = 0; i < len2; i++) // this loop will copy the data into first array from main array..
    {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0; // this index is pointing at 0th index of first array..
    int index2 = 0; // this index is pointing at 0th index of second array..
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    // left wala part..
    mergeSort(arr, s, mid);

    // Right wala part of array..
    mergeSort(arr, mid + 1, e);

    Merge(arr, s, e);
}

int main()
{
    int array[5] = {5, 4, 3, 2, 1};
    int s = 0;
    int n = 5;

    mergeSort(array, s, n - 1);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
}