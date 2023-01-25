// Previous smaller element in array..

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void print(int arrd[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arrd[i] << " ";
    }
}

void nextSmallerElement(int *arr, int n)
{

    stack<int> s;
    s.push(-1);

    int arrd[n];

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];

        while (s.top() >= curr)
        {
            s.pop();
        }

        arrd[i] = s.top();
        s.push(curr);
    }

    print(arrd, n);
}

int main()
{
    int arr[4] = {1, 3, 5, 2};

    nextSmallerElement(arr, 4);
}