// This code will sort the linked containg 0s , 1s , and 2s in assending order..

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

Node *sortList(Node *head)
{
    int zerocnt = 0;
    int onecnt = 0;
    int twocnt = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zerocnt++;
        }
        else if (temp->data == 1)
        {
            onecnt++;
        }
        else
        {
            twocnt++;
        }
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL)
    {
        if (zerocnt != 0)
        {
            temp->data = 0;
            zerocnt--;
        }
        else if (onecnt != 0)
        {
            temp->data = 1;
            onecnt--;
        }
        else
        {
            temp->data = 2;
            twocnt--;
        }
        temp = temp->next;
    }
    return head;
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
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    attail(tail, 2);
    attail(tail, 2);
    attail(tail, 0);
    attail(tail, 1);
    attail(tail, 2);
    attail(tail, 0);
    print(head);

    head = sortList(head);
    print(head);
}