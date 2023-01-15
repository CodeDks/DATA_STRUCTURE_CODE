// Linear search

#include <iostream>
using namespace std;

bool Search(int arr[], int size, int key)
{
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int size;

    cout << "Enter the size of an array : ";
    cin >> size;
    int number[size];
    cout << endl
         << "Enter the element to be searched ( key ) ";
    int key;
    cin >> key;

    for (int i = 1; i <= size; i++)
    {
        cin >> number[i];
    }

    bool found = Search(number, size, key);

    if (found)
    {
        cout << "Key is present.." << endl;
    }
    else
    {
        cout << "Key is absent.." << endl;
    }
}