// Code to find square root or the number using binary search..


#include <iostream>
using namespace std;

int searchResult(int n)
{
    int start = 0;
    int end = n;
    int ans = 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid * mid > n)
        {
            end = mid - 1;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (mid * mid == n)
        {
            return mid;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number to find the square root..";
    cin >> n;

    int result = searchResult(n);
    cout << endl;
    cout << "The result is : " << result;
}