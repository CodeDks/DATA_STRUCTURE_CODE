// checking whether string and it's reverse is same or not..(palindrome string..);
// This code tells the difference between uppar case and lowercase alphabet value..

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

bool checking(char dk[], int length)
{
    int s = 0;
    int e = length - 1;
    while (s <= e)
    {
        if (dk[s] != dk[e])
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