// LINKED LIST

// Inserting data to the head of the node..

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) // This is constructor which is called automatically when object is created and set the value of data..
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertinghead(Node *&head, int d) // yaha reference isiliye use kiye taki original linked list mei change aaye naki copy create hoke usmei..
{
    // creating new node;
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
    // created a new node..
    Node *node1 = new Node(50); // dynamic allocation
    cout << node1->data << endl;
   // cout << node1->next << endl;

    // this is statically allocated ojbect and its method..
    //  Node node1(15);
    //  cout << node1.data << endl;
    //  cout << node1.next << endl;

    Node *head = node1; // head is pointing to node1;

    insertinghead(head, 55);
    print(head);

    insertinghead(head, 75);
    print(head);
}