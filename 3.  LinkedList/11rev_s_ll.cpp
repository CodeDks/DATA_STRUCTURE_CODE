// Reversing a singly linked list using recursion..

/*
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

void reverse(Node *&head, Node *curr, Node *prev)
{
    // Base case..
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
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

    print(head);

    Node *reverseLinkedlist(Node * &head)
    {
        Node *curr = head;
        Node *prev = NULL;

        reverse(head, curr, prev);
        return head;
    }
}

// There is some error in this code..
*/
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
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }
}

void reverse(Node *&head, Node *curr, Node *prev)
{
    // Base case..
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *reverseLinkedList(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;

    reverse(head, curr, prev);
    return head;
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

    head = reverseLinkedList(head);
    print(head);

    // Update the tail pointer to point to the last node in the linked list
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    cout << "The head is at : " << head->data << endl;
    cout << "The tail is at : " << tail->data << endl;

    return 0;
}
