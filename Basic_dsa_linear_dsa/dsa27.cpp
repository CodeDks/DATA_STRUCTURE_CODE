// Search in rotated array..
/*
#include <iostream>
using namespace std;

int findPivot(int arrd[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arrd[mid] >= arrd[0])
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

int binarySearch(int arre[], int s, int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arre[mid] == key)
        {
            return mid;
        }
        else if (key > arre[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int search(int arr[], int size, int key)
{
    int pivot = findPivot(arr, size);

    if (key >= arr[pivot] && key >= arr[size - 1])
    {
        return binarySearch(arr, pivot, size - 1, key);
    }
    else
    {
        return binarySearch(arr, 0, pivot, key);
    }
}
int main()
{
    int size;
    int key;
    cout << "Enter the size of the array : ";
    cin >> size;
    int array[size];
    cout << "Now enter the elements of the array.. " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << endl;
    cout << "The array you've entered is : ";

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    cout << "Enter the key : ";
    cin >> key;
    cout << "The index of key is : " << search(array, size, key);
}
*/


#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
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
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int findPosition(int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    { // BS on second line
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    { // BS on first line
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    
    int size;
    int key;
    cout << "Enter the size of the array : ";
    cin >> size;
    int array[size];
    cout << "Now enter the elements of the array.. " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << endl;
    cout << "The array you've entered is : ";

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    cout << "Enter the key : ";
    cin >> key;
    cout << "The index of key is : " << findPosition(array,size,key);
}

//The commented code is mine..



/*
The logic behind this code is to first find the pivot in rotated array and then apply the 
binary search in array..

we can do find the key using linear search but doing this way helps decrease in time complexity
of the code which is 0(log (n))..
*/