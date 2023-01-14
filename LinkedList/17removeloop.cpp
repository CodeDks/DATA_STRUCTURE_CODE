// Remove loop..

// This Floyd's algorithm

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

void athead(Node *&head, int d)
{
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

Node *FloydAlgo(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node *getstarting(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = FloydAlgo(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeloop(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *startloop = getstarting(head);
    Node *temp = startloop;

    while (temp->next != startloop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Node *node1 = new Node(10);
    Node *tail = node1;
    Node *head = node1;

    athead(head, 20);
    athead(head, 30);
    athead(head, 40);
    athead(head, 50);
    athead(head, 60);
    athead(head, 70);
    athead(head, 80);
    athead(head, 90);
    athead(head, 100);

    // This will creat loop..Rather than tail is pointing towards null it will point towards head->next and this leads to create loop..
    tail->next = head->next->next;

    // print(head);

    Node *ans = FloydAlgo(head);

    if (ans)
    {
        cout << "Loop is present " << endl;
    }
    else
    {
        cout << "There is no any loop ";
    }

    Node *loop = getstarting(head);
    cout << "The loop is present at " << loop->data << endl;

    removeloop(head);
    print(head);
}
