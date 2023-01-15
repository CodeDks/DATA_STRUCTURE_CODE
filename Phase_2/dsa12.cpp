// code to reverse string using recursion..

#include <iostream>
using namespace std;

void reverse(string &str, int s, int e)
{
    cout << str << endl;
    // base case
    if (s > e)
    {
        return;
    }

    swap(str[s], str[e]);
    s++;
    e--;

    // recursive call
    reverse(str, s, e);
}

int main()
{
    string dk = "dheeraj";
    int s = 0;
    int e = dk.length() - 1;

    reverse(dk, s, e);

    cout << dk;
}