// Array declaration/initialization and accessing the array and also finding largest and smallest element in the array..

#include <iostream>
using namespace std;

int GetMax(int arr[], int size)
{
    int max = -2^31;  //Lowest value of an integer data type..
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int GetMin(int arr[], int size)
{
    int min = (2^31) - 1;  // Highest value of an interger data type..
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];

    for (int i = 1; i <= size; i++) // This for loop for taking input in the array..
    {
        cin >> arr[i];
    }

    cout << "The array you've entered is : " ;

    for (int i = 1; i <= size; i++)   // This loop for displaying the entered array..
    {
        cout << arr[i] << " " ;
    }

    cout << endl << "The largest element of the array is : " << GetMax(arr,size);
    cout << endl << "The smallest element of the array is : " << GetMin(arr,size);

}