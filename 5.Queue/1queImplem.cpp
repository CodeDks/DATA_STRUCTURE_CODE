#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(15);
    q.push(20);

    cout << "The size of queue is : " << q.size();

    while (q.empty())
    {
        cout << q.front() << " " ;
        q.pop();
    }
}