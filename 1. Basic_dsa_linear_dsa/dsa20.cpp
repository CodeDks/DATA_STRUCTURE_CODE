// Array intersection..

#include <iostream>
using namespace std;

int ArrayIntersection(int arr[], int arrd[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        int element = arr[i];

        for (int j = 0; j < n; j++)
        {
            if (element == arrd[j])
            {
                cout << arrd[j] << " ";
                break;
            }
        }
    }
}

int main()
{
    int array[7] = {1, 2, 5, 7, 55, 15, 23};
    int dheeraj[8] = {14, 15, 16, 18, 145, 1456, 1264, 14789};

    cout << "The common element in both the array is : " << ArrayIntersection(array, dheeraj, 7, 8);
}

//ye question stl in c++ padhne ke baad hi solve hoga..
//This question belongs to lecture no 10..