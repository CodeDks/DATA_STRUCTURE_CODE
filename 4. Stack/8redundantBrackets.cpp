// Given valid mathematical expressions in the form of a string. You are supposed
// to return true if the given expression contains a pair of redundant brackets
// , else return false. The given strings only contains '(' , ')' , '+', '-', '*','/'.

#include <iostream>
#include <stack>
using namespace std;

#include <stack>

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // ch ya toh ')' hai or lowercase letter

            if (ch == ')')
            {
                bool isRedundant = true;

                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }

                if (isRedundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string str = "((a+b))";

    bool ans = findRedundantBrackets(str);

    if (ans)
    {
        cout << "Redundant..";
    }
    else
    {
        cout << "Non redundand..";
    }
}

//TC = O(n);