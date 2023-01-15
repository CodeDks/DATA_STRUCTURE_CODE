// code to merge two array and put the resultant into one of the two array..
#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m)
{
    int i = 5;
    int j = 0;

    while (i <= n && j <= m)
    {
        arr1[i] = arr2[j];
        i++;
        j++;
    }
}
void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int arr1[8] = {1, 2, 3, 4, 5};
    int arr2[3] = {6, 7, 8};

    merge(arr1, 8, arr2, 3);
    print(arr1, 8);
}