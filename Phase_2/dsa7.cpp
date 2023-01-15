// Reach home game..
#include <iostream>
using namespace std;

void rec(int src, int des)
{
    cout << "Src is " << src << " and "
         << " destination is " << des << endl;
    if (src == des)
    {
        cout << "Reached..";
        return;
    }
    src++;
    rec(src, des);
}

int main()
{

    int src = 1;
    int des = 10;

    rec(src, des);
}