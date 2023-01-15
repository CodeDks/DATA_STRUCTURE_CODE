// check pelindrome using recursion

#include <iostream>
using namespace std;

bool check(string &dk, int s, int e)
{
    if (s > e)
    {
        return false;
    }

    if (dk[s] == dk[e])
    {
        return true;
        s++;
        e--;
    }
    else
    {
        return false;
    }

    check(dk, s, e);
}

int main()
{
    string dk;
    cout << "Enter the string ";
    cin >> dk;

    bool d = check(dk, 0, dk.length() - 1);
    if (d)
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
}