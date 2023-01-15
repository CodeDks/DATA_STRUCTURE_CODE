// Pivot element in the array..

/*
#include <iostream>
using namespace std;

int Pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    int array[5] = {9, 14, 1, 4, 6};

    cout << "The index of Pivot element is : " << Pivot(array, 5) << endl;
}
*/
//Pivot_index..

#include<iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end - start)/2;
    
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else 
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main ()
{
    int array[5] = {10,15,1,2,6};
    cout << "The index of pivot element is : " << pivot(array,5) << endl;
}