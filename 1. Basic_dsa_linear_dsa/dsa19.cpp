//Finding duplicate no in the array..

#include<iostream>
using namespace std;

int FindDuplicate(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)  // This loop will XOR all array element..
    {
        ans = ans ^ arr[i];
    }
    
    for (int i = 1; i < size; i++) // This loop will XOR {1, n - 1} elements..
    {
        ans = ans ^ i;
    }
    return ans;
}

int main ()
{
    int array[7] = {1,2,3,4,5,6,5};

   cout << "The duplicate no in the array is : " <<  FindDuplicate(array,7);
}