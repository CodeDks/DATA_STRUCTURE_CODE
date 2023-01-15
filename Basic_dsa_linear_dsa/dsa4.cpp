/* 1 2 3 4
   5 6 7 8
   9 10 11 12
// Printing this type of pattern */

#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 1;
    int i = 1;
    cout << "Enter the no rows : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}