// This code will tell whether any loop is present in the linked list..

//This is the first approach to detect the loop..

#include <iostream>
#include <map>
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

bool DetectLoop(Node *&head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
        // cycle is present..
        if (visited[temp] == true)
        {
            cout << "cycle is present on no " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
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

    //print(head);

    bool ans = DetectLoop(head);

    if (ans)
    {
        cout << "Loop is present " << endl;
    }
    else
    {
        cout << "There is no any loop ";
    }
}