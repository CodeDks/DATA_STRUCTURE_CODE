// You are given a stack and an integer no, your task is to insert that no at the bottom of the same stack..

// This problem is solved using recursion..

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &myStack, int x)
{
    // Base case..
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    // Recursive call..
    solve(myStack, x);

    myStack.push(num);
}
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    solve(myStack, x);
    return myStack;
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(8);
    s.push(10);
    s.push(6);

    int x;
    cout << "Enter the no to put at bottom of stack : ";
    cin >> x;

    stack<int> st = pushAtBottom(s, x);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}