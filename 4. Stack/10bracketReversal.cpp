/*
you are given a string str containing either '{' or '}'. str is called valid if all the brackets are balanced. Formally for each opening bracket
, there must be a closing bracket right to it.

For example..
"{}{}" , "{{}}" , "{{}{}}" are all valid while "}{}", "{}}{{}", "{{}}}{" are not valid string..

your task is to make str valid by performing some operations on it. In one operation you can convert '{' int '}' or vice versa, and the cost of one
such operation is 1.

Determine minimum cost to make str valid..
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int findMinimumCost(string str)
{

    // odd condition
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
            s.push(ch);
        else
        {
            // ch is closed brace
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }

    // stack contains invalid expression
    int a = 0, b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
int main()
{
    string s = "{}}}{}";

    cout << findMinimumCost(s);
}
