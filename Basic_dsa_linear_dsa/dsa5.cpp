/* *
 * *
 * * *
 * * * *
 * * * * *
 */

// Creating this type of pattern..

#include <iostream>
using namespace std;

int main()
{
    int n;
    int row = 1;
    cout << "Enter the no of rows : ";
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*"
                 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}