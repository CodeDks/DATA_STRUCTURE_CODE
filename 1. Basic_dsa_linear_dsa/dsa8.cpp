/* Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x. */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no which is in range of integer : ";
    cin >> n;
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        {
            if (ans == n)
            {
                cout << "True" << endl;
            }
        }
    }
}

// Note that this method is brute force..
// There is also an another efficient menthod..