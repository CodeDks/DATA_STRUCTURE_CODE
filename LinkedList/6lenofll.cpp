// Lenght of LINKED LIST

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
    head = temp;
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
    insertAthead(head, 10);
    insertAthead(head, 20);
    insertAthead(head, 30);
    insertAthead(head, 40);

    print(head);
    cout << "The length of linked list is " << getlenght(head);
}