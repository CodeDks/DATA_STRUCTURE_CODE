/*
you are given two sorted array of size 'n' and 'm' respectively. Your task is to merge both the array in sorted way and print the resultant
array..
*/

#include <iostream>
using namespace std;

void mergeSort(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) // is loop se bahar anne pe koi ek ya dono array ka elements khali ho gya hoga..
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n) // copy kar do first array ke remaining element ko..
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m) // copy kar do second array ke remaining element ko..
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arrd[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arrd[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the first array : ";
    cin >> n;
    int array1[n];
    cout << "Now fill the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }

    cout << endl
         << "The array1 is : ";
    for (int i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }

    cout << endl;

    int m;
    cout << "Enter the size of the second array : ";
    cin >> m;

    int array2[m];

    cout << "Now enter the elements of the array : " << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> array2[i];
    }

    cout << "The array2 is : ";
    for (int i = 0; i < m; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;

    int array3[n + m];

    mergeSort(array1, n, array2, m, array3);
    print(array3, n + m);
}