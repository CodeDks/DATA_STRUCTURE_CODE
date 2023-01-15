/* You have been given a integer array of size N..Where N = [2M + 1]. Now in the given array M is present twice and one number is present only
once..You have to find that and return that unique number present in that array..

Sample :
int arr[9] = {2,4,2,4,1,8,7,8,7};
Here no of element in the array is 9, every element is present twice except 1..
so the output will be 1..
*/

#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];          // Here with using XOR (^) we've solved this problem..as we know a ^ a = 0 & a ^ 0 = a;
    }
    return ans;
}

int main()
{
    int arr[9] = {2, 4, 2, 4, 1, 8, 7, 8, 7};
    cout << "The unique number in the array is : " << unique(arr, 9);

    return 0;
}


// This code is written correctly.
