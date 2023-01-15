// Pointers in c++

#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
}