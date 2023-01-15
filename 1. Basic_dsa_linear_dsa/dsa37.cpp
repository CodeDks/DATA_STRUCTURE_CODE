/*
    code to find the length of the character array..
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
int main()
{
    char dk[14];
    cout << "Enter your name : ";
    cin >> dk;

    cout << "Your name is : " << dk << endl;

    cout << "Length of the array is : " << Get_length(dk);
}