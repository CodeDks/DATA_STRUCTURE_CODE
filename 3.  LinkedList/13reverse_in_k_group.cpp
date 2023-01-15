// Code to reverse singly linked list in k group..

#include <iostream>
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

void athead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

Node *reverse(Node *&head, int k)
{
    //base case
    if (head == NULL)
    {
        return NULL;
    }

    //step : 1 - Reverse first k nodes..
    Node *forward = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 0;
    while (curr != NULL && cnt < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }
    // step : 2 - Recursion will handle aage ka..

    if (forward != NULL)
    {
        head->next = reverse(forward, k);
    }
    return prev;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;

    athead(head,20);
    athead(head,30);
    athead(head,40);
    athead(head,50);
    athead(head,60);
    athead(head,70);
    athead(head,80);
    athead(head,90);
    athead(head,100);
    print(head);

    head = reverse(head, 2);

    print(head);
}