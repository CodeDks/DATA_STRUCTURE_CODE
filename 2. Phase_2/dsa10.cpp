// Linear search using recursion..

#include <iostream>
using namespace std;

bool LinearSearch(int *arr, int size, int key)
{
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remaining = LinearSearch(arr + 1, size - 1, key);
        return remaining;
    }
}

int main()
{
    int array[5] = {1, 2, 4, 5, 7};
    int size = 5;
    int key = 10;

    bool found = LinearSearch(array, size, key);

    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent " << endl;
    }
}