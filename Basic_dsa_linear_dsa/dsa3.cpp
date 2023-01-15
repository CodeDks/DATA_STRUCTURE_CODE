/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4 */
// Creating this type of pattern..

#include <iostream>
using namespace std;

int main()
{
    /* int n;
     int i = 1;
     cout << "Enter the no of rows : ";
     cin >> n;

     while (i <= n)
     {
         int j = 1;
         while (j <= n)
         {
             cout << j;
             j++;
         }
         cout << endl;
         i++;
     }
 */

    int n;
    cout << "Enter the no of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j ;
        }
        cout << endl;
    }
    return 0;
}