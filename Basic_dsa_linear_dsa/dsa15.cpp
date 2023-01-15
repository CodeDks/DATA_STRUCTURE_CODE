// Program to reverse an array..

 #include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {5, 6, 4, 8, 2, 7};

    int d[4] = {5, 6, 7, 8};
    reverse(arr, 6);
    reverse(d,4);

    PrintArr(arr, 6);
    PrintArr(d,4);

    return 0;
}


