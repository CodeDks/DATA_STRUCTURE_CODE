// code to bubble short using recursion..
#include <iostream>
using namespace std;

void sort(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sort(arr, size - 1);
}

int main()
{
    int size;
    cout << "Enter the size";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "entered array is ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}