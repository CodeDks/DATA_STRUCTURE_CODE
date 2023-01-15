/*
   code to reverse the char array..
*/

#include <iostream>
using namespace std;

int Get_length(char dk[])
{
    int count = 0;
    for (int i = 0; dk[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char dk[], int length)
{
    int s = 0;
    int e = length - 1;
    while (s <= e)
    {
        swap(dk[s], dk[e]);
        s++;
        e--;
    }
}

void print(char dk[])
{
   cout << dk;
}

int main()
{
    char dk[14];
    cout << "Enter your name : ";
    cin >> dk;
    cout << "Your name is : " << dk << endl;

    int length = Get_length(dk);

    reverse(dk, length);
    print(dk);
}
