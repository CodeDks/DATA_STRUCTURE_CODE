// You are having a stack ARR of size N + 1, your task is to delete the middlemost element so that the size of array remains N..

// Stack implementation using array..

#include <iostream>
#include <stack>
using namespace std;
#include <bits/stdc++.h>
void solve(stack<int> &inputStack, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}

int main()
{
    stack<int> s;
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    int N = s.size();

    deleteMiddle(s, N);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}