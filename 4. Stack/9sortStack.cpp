// sort the stack using recursion..

#include <iostream>
#include <stack>
using namespace std;

void sortedStack(stack<int> &stack, int num)
{
    // base case..
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    // Recursive call
    sortedStack(stack, num);

    stack.push(n);
}
void sortStack(stack<int> &stack)
{
    // base case..
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortedStack(stack, num);
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(8);
    s.push(10);
    s.push(6);

    sortStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}