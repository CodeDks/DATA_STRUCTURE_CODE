// This code will delete the duplicate node form the sorted linked list..

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

Node *delete_duplicate(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *curr = head;
    while (curr != NULL)
    {
        // equal wala case..
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            Node *next_next = curr->next->next;
            Node *nodetodelete = curr->next;
            delete (nodetodelete);
            curr->next = next_next;
        }
        else
        {
            // if curr->data != curr->next->data
            curr = curr->next;
        }
    }
    return head;
}

/*
Node *delete_duplicate(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL && curr->next != NULL)
    {
        // equal wala case..
        if (curr->data == curr->next->data)
        {
            Node *nodetodelete = curr->next;
            curr->next = nodetodelete->next;
            delete (nodetodelete);
        }
        else
        {
            // if curr->data != curr->next->data
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}
*/
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

    head = delete_duplicate(head);
    print(head);
}

// The code which is commented is copied from chatgpt..