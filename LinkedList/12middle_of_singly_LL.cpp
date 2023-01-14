// This code will find the middle of the linked list..

// Code to reverse singly link list..

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

void attail(Node *&head, Node *&tail, int d)
{
    // New node creation..
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

int getlenght(Node *&head)
{
    Node *temp = head;
    int length = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void findmiddle(Node *&head)
{
    int len = getlenght(head);
    int ans = len / 2;

    Node *temp = head;
    int cnt = 0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    cout <<temp->data;
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
    Node *node1 = new Node(80);
    Node *tail = node1;
    Node *head = node1;

    attail(head, tail, 10);
    attail(head, tail, 20);
    attail(head, tail, 30);
    attail(head, tail, 40);
    attail(head, tail, 50);
    attail(head, tail, 60);
    print(head);

    cout << "The length of the LL is " << getlenght(head) << endl;
    cout << "The middle of the linked list is " << ((getlenght(head)) / 2) + 1 << endl;

    findmiddle(head);
}
