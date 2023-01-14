// Merge sort in singly linked list..

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *findmid(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *merge(node *left, node *right)
{
    if (left == NULL)
    {
        return right;
    }

    if (right == NULL)
    {
        return left;
    }

    // creating a dummy node..
    node *ans = new node(-1);
    node *temp = ans;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}
node *mergeSort(node *head)
{
    // base case..

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // find mid..

    node *mid = findmid(head);

    // breaking the ll in two parts..
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    // recursive call to sort both the linked list..

    left = mergeSort(left);
    right = mergeSort(right);

    // merge two sorted linked list into a single linked list..

    node *result = merge(left, right);

    return result;
}

void attail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    attail(tail, 20);
    attail(tail, 30);
    attail(tail, 60);
    attail(tail, 50);
    attail(tail, 70);
    attail(tail, 40);

    head = mergeSort(head);
    print(head);
}