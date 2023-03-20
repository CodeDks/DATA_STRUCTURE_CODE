// Array intersection..

#include <iostream>
using namespace std;

int ArrayIntersection(int arr[], int arrd[], int size1, int size2)
{
    int ans;

    for (int i = 0; i < size1; i++)
    {
        int element = arr[i];

        for (int j = 0; j < size2; j++)
        {
            if (element == arrd[j])
            {
                ans = arrd[j];
            }
        }
    }
    return ans;
}

int main()
{
    int array[7] = {1, 2, 5, 7, 55, 15, 23};
    int dheeraj[8] = {14, 15, 16, 18, 145, 1456, 1264, 14789};

    cout << "The common element in both the array is : " << ArrayIntersection(array, dheeraj, 7, 8);
}

// This question belongs to lecture no 10..