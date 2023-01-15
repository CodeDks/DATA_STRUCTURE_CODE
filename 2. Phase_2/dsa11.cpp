// Binary search using recursion..

#include <iostream>
using namespace std;
void print(int arrd[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arrd[i] << " " ;
    }
    cout << endl;
}

bool binary_search(int *arr, int size, int s, int e, int key)
{
    print(arr, s, e);
    // base case
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] < key)
    {
        // right wala part..
        return binary_search(arr, size, mid + 1, e, key);
    }
    else
    {
        // left wala part..
        return binary_search(arr, size, s, mid - 1, key);
    }
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int s = 0;
    int e = 4;
    int key = 5;

    bool search = binary_search(array, size, s, e, key);

    cout << endl;
    if (search)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent " << endl;
    }
}