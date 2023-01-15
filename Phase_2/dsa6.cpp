// Printing counting using recursion..

#include <iostream>
using namespace std;

void count(int n)
{
    if (n == 0)
    {
        return;
    }

    count(n - 1);
    // using this method counting is printed in increasing order..for printing in reverse order put line 15 before line 13
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter the no upto which conting is to be printed :";
    cin >> n;

    count(n);
}