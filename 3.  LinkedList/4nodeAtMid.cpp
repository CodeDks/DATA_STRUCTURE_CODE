// LINKED LIST

// Inserting data to the middle  of the  node..

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
void insertAtTail(Node *&tail, int t)
{
    // creating new node
    Node *temp = new Node(t);
    tail->next = temp;
    tail = tail->next;
}

void insertAtmiddle(Node *&head, Node *&tail, int position, int d)
{
    // first position pe node add krne ke liye..
    if (position == 1)
    {
        insertinghead(head, d);
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
    Node *nodeatmiddle = new Node(d);
    nodeatmiddle->next = temp->next;
    temp->next = nodeatmiddle;
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
    Node *tail = node1;

    insertAtTail(tail, 55);
    print(head);

    insertAtmiddle(head, tail, 1, 22);

    insertAtTail(tail, 75);
    print(head);

    cout << "head" << head-> data << endl;
    cout << "Tail" << tail->data << endl;
}