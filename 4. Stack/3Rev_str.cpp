// Code to reverse the string in stack..

// As the operation in stack is LIFO it will give reversed ans..

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "dheeraj";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout << "Answer is " << ans << endl;
}

// T.C = O(N)
// S.C = O(N)