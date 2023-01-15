// Bubble sort..

#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < (size - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print(int arrd[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arrd[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    sort(array, size);
    print(array, size);
}