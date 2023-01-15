// Given an integer n , return the difference of product of its digit and sum of its digit..
#include <iostream>
using namespace std;
int main()
{
    int prod = 1;
    int sum = 0;
    int n;
    cout << "Enter the no. : " << endl;
    cin >> n;
    while (n != 0)
    {
        int digit;
        digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;

        n = n / 10;
    }
    int answer = prod - sum;
    cout << answer << endl;
}
