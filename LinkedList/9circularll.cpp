// Circular singly linked list..

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
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

void insertNode(Node *&tail, int element, int d)
{
    // if list is empty
    if (tail = NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode; // next of the node is pointing to itself this makes it circular..
    }
    else
    {
        // Non empty list..
        //  assuming that element is present in the list..

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // elemet found and current is representing the element..
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (temp != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    // Empty list mei insert kar rahe..
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);
}