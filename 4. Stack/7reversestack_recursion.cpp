// Program to reverse the stack using recursion..

#include <iostream>
#include <stack>
using namespace std;

void atbottom(stack<int> &myStack, int x)
{
    // Base case..
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int element = myStack.top();
    myStack.pop();

    // Recursive call..
    atbottom(myStack, x);

    myStack.push(element);
}
void reverseStack(stack<int> &stack)
{
    // base case..
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call..
    reverseStack(stack);

    atbottom(stack, num);
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(8);
    s.push(10);
    s.push(6);

    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}