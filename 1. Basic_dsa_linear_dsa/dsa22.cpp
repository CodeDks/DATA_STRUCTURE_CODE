// Binary search..

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
}

int main()
{
    int array[6] = {2, 3, 4, 5, 6, 7};

    int Index = BinarySearch(array, 6, 7);
    cout << "The index of key is : " << Index;
}