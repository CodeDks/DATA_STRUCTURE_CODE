// Checking wheter the array is sorted or not using recursion

#include <iostream>
using namespace std;

bool issorted(int *arr, int size)
{
    // base case

    if (size == 0 || size == 1)
    {
        return true; // if array has only one element or no element then that array is already sorted
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return issorted(arr + 1, size - 1); // for checking remaining part..
    }
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    bool ans = issorted(array, 5);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted";
    }
}
