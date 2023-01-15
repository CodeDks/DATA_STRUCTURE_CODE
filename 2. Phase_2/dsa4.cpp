// Factorial using recursion..

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0) // base case (mandatory in program..)
    {
        return 1;
    }

    int smaller_prob = factorial(n - 1); // or simply return n * factorial(n - 1); (recursive relation mandatory in program..)
    int bigger_prob = n * smaller_prob;

    return bigger_prob;
}

int main()
{
    int n;
    cout << "Enter the no to find it's factorial :";
    cin >> n;

    int ans = factorial(n);
    cout << "The factorial of " << n << " is " << ans;
}