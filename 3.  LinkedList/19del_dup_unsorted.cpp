// This code will delete the duplicate node form unsorted linked list..

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

Node *delete_dup(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        while(curr != NULL)
        {
            if (curr->data == curr->next->data)
            {
                Node *next_next = curr->next->next;
                Node *todelete = curr->next;
                delete(todelete);
                curr->next = next_next;
            }
        }
    }

}

void attail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
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

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    attail(tail, 20);
    attail(tail, 20);
    attail(tail, 30);
    attail(tail, 40);
    attail(tail, 40);
    attail(tail, 50);
    print(head);

    head = delete_dup(head);
    print(head);
}

//pending work..