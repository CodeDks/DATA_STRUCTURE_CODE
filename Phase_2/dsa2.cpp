// Creating an variable size of array using dynamic memory allocation.

#include <iostream>
using namespace std;

int printsum(int *array, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int *arr = new int[n];   //dynamic memory allocation (inside heap memory) for static memory alloc. inside stack--> int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum of elements of array is : " <<  printsum(arr, n);
    
}