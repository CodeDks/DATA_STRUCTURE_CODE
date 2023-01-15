// Optimization of previous code..
// Finding squareroot of the no. upto 3 decimal places using binary search..

#include <iostream>
using namespace std;

int sqrootInteger(int n)
{
    int s = 0;
    int e = n;
    int ans = 1;

    long long int mid = s + (e - s) / 2;

    while (s <= e)
    {
        long long int square = mid * mid;
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        else if (square == n)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double moreprecise(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the no to find the square root : ";
    cin >> n;

    int tempsol = sqrootInteger(n);

    cout << "The answer is " << moreprecise(n, 3, tempsol);
}
