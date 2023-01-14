// Same problem with different approach..

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

void attail2(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}
Node *sortList(Node *&head)
{

    // Creating a dummy node for 0 , 1 and 2 also created the pointers of it's head and tail both
    //  pointing the same node at starting..

    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;

    Node *onehead = new Node(-1);
    Node *onetail = onehead;

    Node *twohead = new Node(-1);
    Node *twotail = twohead;

    Node *curr = head;

    // creating separate LL for 0, 1, and 2

    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            attail2(zerotail, curr);
        }
        else if (value == 1)
        {
            attail2(onetail, curr);
        }
        else
        {
            attail2(twotail, curr);
        }
        curr = curr->next;
    }

    // merging the three linked list..
    if (onehead->next != NULL)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next = NULL;

    // Setting the head..
    head = zerohead->next;

    // deleting the dummy nodes..
    delete zerohead;
    delete onehead;
    delete twohead;

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
/*
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

void attail2(Node *&tail, Node *&curr)
{
    tail->next = curr;
    tail = curr;
}
Node *sortList(Node *&head)
{
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;

    Node *onehead = new Node(-1);
    Node *onetail = onehead;

    Node *twohead = new Node(-1);
    Node *twotail = twohead;

    Node *curr = head;

    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            attail2(zerotail, curr);
        }
        else if (value == 1)
        {
            attail2(onetail, curr);
        }
        else
        {
            attail2(twotail, curr);
        }
        curr = curr->next;
    }

    onehead->next = zerotail->next;
    zerotail->next = onehead->next;
    onetail->next = twohead->next;
    twotail->next = NULL;

    zerotail = onetail;
    head = zerohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;

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
    Node *head = NULL;
    Node *tail = NULL;

    attail(tail, 1);
    attail(tail, 2);
    attail(tail, 2);
    attail(tail, 0);
    attail(tail, 1);
    attail(tail, 2);
    attail(tail, 0);
    print(head);

    head = sortList(head);
    print(head);
    return 0;
}
*/
// This code is written correctly but don't know why it's not running..