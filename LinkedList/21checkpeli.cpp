#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void attail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool checkpelidrome(vector<int> arr)
{
    int s = 0;
    int n = arr.size() - 1;
    int e = n - 1;

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

void copy(Node *&head)
{
    vector<int> arr;

    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    bool ans = checkpelidrome(arr);

    if (ans == true)
    {
        cout << "Pelidrome LL";
    }
    else
    {
        cout << "Non pelidrome LL ";
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    attail(tail, 15);
    attail(tail, 20);
    attail(tail, 15);
    attail(tail, 10);

    copy(head);
}
// this code is perfectly fine becoz I tested it on GoG..but don't know why it's not working..