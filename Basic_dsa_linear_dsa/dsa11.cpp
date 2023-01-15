// Program to print counting between two number..
#include <iostream>
using namespace std;

void counting(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int a, b;
    cout << "Enter the two no : ";
    cin >> a >> b;
    counting(a, b);
}