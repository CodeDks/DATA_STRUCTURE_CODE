// Bubble sort..

#include <iostream>
using namespace std;

// void sort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < (size - i); j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) // fix the loop bound
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
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
    int array[5] = {8, 7, 9, 4 ,1};


    sort(array, 5);
    print(array, 5);
}