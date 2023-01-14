// DOUBLY LINKED LIST

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor..
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAthead(Node *&head, int d)
{
    // creating node
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatposition(Node *&head, Node *&tail, int position, int d)
{

    // first position pe node add krne ke liye..
    if (position == 1)
    {
        insertAthead(head, d);
        return;
    }
    Node *temp = head; // creating a pointer temp which is pointing to the head..
    int cnt = 1;       // This line show that I'm on first node..

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last position..
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a new node..
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
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

int getlenght(Node *&head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

int main()
{
    Node *node1 = new Node(5);

    Node *head = node1;
    Node *tail = node1;
    insertAthead(head, 10);
    insertAthead(head, 20);
    insertAthead(head, 30);
    insertAthead(head, 40);

    print(head);

    insertAtTail(tail, 00);
    print(head);

    insertatposition(head, tail, 4, 55);
    print(head);

    cout << "The length of linked list is " << getlenght(head);
}