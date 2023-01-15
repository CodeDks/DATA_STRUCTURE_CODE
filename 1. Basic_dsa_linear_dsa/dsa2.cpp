/* 111
   222
   333
   444
       */
// This type of pattern printing..

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of rows : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}