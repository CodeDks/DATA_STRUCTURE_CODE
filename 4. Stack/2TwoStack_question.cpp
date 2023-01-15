// Design a data structure, which represents two stacks using only one array common for both stacks..

/*
Approach ->
    traverse a array from front and back side and making front side stack 1 and back side stack 2..
*/

#include <iostream>
#include <stack>
using namespace std;

class TwoStack
{
private:
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initialize TwoStack.
    TwoStack(int s)
    {
        this->size = s;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    // Push in stack 1.
    void push1(int num)
    {
        // stack1 mei push katne ke liye kam se kam ek space to hona chahiye..
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};

int main ()
{
    TwoStack st(5);
}
