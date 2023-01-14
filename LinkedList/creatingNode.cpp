// LINKED LIST

// Creating a node

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

int main()
{
    Node *node1 = new Node(50); // dynamic allocation
    cout << node1->data << endl;
    cout << node1->next << endl;

    // this is statically allocated ojbect and its method..
    //  Node node1(15);
    //  cout << node1.data << endl;
    //  cout << node1.next << endl;
}