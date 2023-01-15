// Code to revese no..
#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans = 0;
    cout << "Enter the no. : ";
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << "The reversed no is : " << ans << endl;
    return 0;
}