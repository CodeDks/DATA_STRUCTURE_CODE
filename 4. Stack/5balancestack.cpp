// Code to check wether the input string is valid or not..

#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            // If else condition reaches then ch is closing bracket..
            // At first check whether stack is empty or not..proceed only for non empty stack..
            if (s.empty())
            {
                return false;
            }
            else
            {
                // At first find the top of stack..
                char top = s.top();
                // If top has opening bracket and ch is already closed then remove the top and continue check the rest of the expression
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    // if stack is empty at the end of the expression it means that it's balanced
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "{(){}}";
    bool ans = isValidParenthesis(str);
    if (ans)
    {
        cout << "Valid string.." << endl;
    }
    else
    {
        cout << "Invalid string.." << endl;
    }
}

// Time and space complexity is O(N)