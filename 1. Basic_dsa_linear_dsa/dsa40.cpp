// Modification of code written in dsa.39
// This code does not care whether the alphabets is in upparcase or in lowercase..

#include <iostream>
using namespace std;

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int Get_length(char dk[])
{
    int count = 0;
    for (int i = 0; dk[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checking(char dk[], int length)
{
    int s = 0;
    int e = length - 1;
    while (s <= e)
    {
        if (tolowercase(dk[s]) != tolowercase(dk[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char dk[14];
    cout << "Enter the string : ";
    cin >> dk;

    cout << "The string you've entered is : " << dk << endl;

    int length = Get_length(dk);

    int ans = checking(dk, length);
    cout << ans;
}