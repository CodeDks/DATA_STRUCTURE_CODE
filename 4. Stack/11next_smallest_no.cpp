#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{

    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = (n - 1); i >= 0; i--)
    {
        int curr = arr[i];

        while (s.top() >= curr)
        {
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> array;
    array.push_back(2);
    array.push_back(1);
    array.push_back(4);
    array.push_back(3);

    vector<int> ans = nextSmallerElement(array, 5);
    for (int i : ans)
    {
        cout << i << " ";
    }
}
