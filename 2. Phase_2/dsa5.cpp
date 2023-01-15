// Power of 2 using recursion..

#include <iostream>
using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int smallP = power(n - 1);  // or simply return n * power(n - 1);
    int bigP = 2 * smallP;
    return bigP;
}

int main()
{
    int n;
    cout << "Enter the power of 2 : ";
    cin >> n;

    int ans = power(n);
    cout << ans;
}