/*
An array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

Example 1:

Input: arr = [0,1,0]
Output: 1

Example 2:

Input: arr = [0,2,1,0]
Output: 1

Example 3:

Input: arr = [0,10,5,2]
Output: 1
*/

/*
int PeakIndex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            mid = e;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
   /*
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }


   int array[4] = {0,1,7,3};

    cout << "The index of Peak element is : " << PeakIndex(array, 4);

    return 0;

}
*/

// Peak of mountain array..

#include <iostream>
using namespace std;

int Peak(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int array[5] = {0, 2, 5, 4, 1};
    cout << "The peak element of this mountain array is : " << Peak(array, 5);
}


//This code will provide index of peak element in the mountain array..