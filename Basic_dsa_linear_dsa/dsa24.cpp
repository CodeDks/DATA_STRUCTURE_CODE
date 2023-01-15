// First and last occurence in the sorted array..
// This code will return -1 if key is not present in the given array..

#include <iostream>
using namespace std;

int first(int arr[], int size, int key) //This function is for finding the first occurrence..
{
    int ans = -1;
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            e = mid - 1;
            ans = mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int last(int arrd[], int size, int key) //This function is for finding the last occurrence..
{
    int ans = -1;
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arrd[mid] == key)
        {
            s = mid + 1;
            ans = mid;
        }
        else if (arrd[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int array[5] = {1, 2, 2, 3, 4};
    cout << "The first occurence of 2 is at index : " << first(array, 5, 5) << endl;
    cout << "The last occurence of 2 is at index : " << last(array, 5, 5);
}

// Note :
//  For finding Total no of occurrence == (index of first occ - index of last occ) + 1;