/*
Write @40 when space comes in the string..

example

my name is dheeraj..

output is
my@40name@40is@40dheeraj..

*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    string temp;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }

    cout << temp;
}
