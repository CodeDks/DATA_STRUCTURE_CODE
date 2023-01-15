// Sum of elements of an array...
#include <iostream>
using namespace std;

 int ArrSum(int arr[], int size);

int main()
{
    int size;

    cout << "Enter the size of array : ";
    cin >> size;
    int number[size];
    for (int i = 1; i <= size; i++)
    {
        cin >> number[i];
    }

    cout << endl
         << "The array you've entered is : ";
    for (int i = 1; i <= size; i++)
    {
        cout << number[i] << " ";
    }

    cout << endl << "Sum of the elements of array is : " << ArrSum(number,size);
}

int ArrSum (int arr[],int size)
{
    int sum = 0;
    for (int i = 1; i <= size; i++)
    {
        sum = sum + arr[i] ;
    }
    return sum;
}