// DOUBLY LINKED LIST
// if at starting head and tail both are null..

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

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "Memory is freed for " << val << endl;
    }
};

void insertAthead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        // creating node
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertatposition(Node *&head, Node *&tail, int position, int d)
{

    // first position pe node add krne ke liye..
    if (position == 1)
    {
        insertAthead(head, tail, d);
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
        insertAtTail(head, tail, d);
        return;
    }

    // creating a new node..
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{
    // deleting first node..
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node..
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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

    Node *head = NULL;
    Node *tail = NULL;
    insertAthead(head, tail, 10);
    insertAthead(head, tail, 20);
    insertAthead(head, tail, 30);
    insertAthead(head, tail, 40);
    cout << "head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    print(head);

    insertAtTail(head, tail, 00);
    print(head);

    insertatposition(head, tail, 4, 55);
    print(head);

    cout << "The length of linked list is " << getlenght(head) << endl;
    deleteNode(1, head);
    print(head);
    deleteNode(2, head);
    print(head);
    deleteNode(3, head);
    print(head);
    deleteNode(4, head);
    print(head);

    cout << endl;

    cout << "head " << head->data << endl;
    cout << "Tail " << tail->data << endl;
}