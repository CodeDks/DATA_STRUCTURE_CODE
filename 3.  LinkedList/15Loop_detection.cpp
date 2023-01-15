// This code will detect the loop present in the linked list..

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
            cout << "The loop is present at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
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
    tail->next = head->next;

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
}

// Important..
// Floyd's algorith always return a node which is present inside the loop it does gives start point of the loop..