// Code to reverse singly link list..

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

void attail(Node *&head, Node *&tail, int d)
{
    // New node creation..
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

int reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
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
    Node *node1 = new Node(80);
    Node *tail = node1;
    Node *head = node1;

    attail(head, tail, 10);
    attail(head, tail, 20);
    attail(head, tail, 30);
    attail(head, tail, 40);
    attail(head, tail, 50);
    attail(head, tail, 60);
    print(head);

    cout << "The head is at : " << head->data << endl;
    cout << "The tail is at : " << tail->data << endl;

    reverse(head);
    print(head);
}
