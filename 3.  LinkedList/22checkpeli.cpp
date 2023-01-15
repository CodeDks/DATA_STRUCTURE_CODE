// optimised code for checking the pelidromic LL

#include <iostream>
/*
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

Node *getmid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *reverse(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool copy(Node *&head)
{
    //step.1 - Finding the middle of the linked list..
    Node *middle = getmid(head);

    // step.2- Reversing the linked list after the mid part..

    Node *temp = middle->next;
    middle->next = reverse(temp);

    // step.3 - Creating 2 halves of the linked list..
    Node *head1 = head;
    Node *head2 = middle->next;

    // step.4 - Checking the two halves are same or not..
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    // step.4 - Repeat step 2, this will make the linked list into it's original form..
    // and also this part is optional..

    temp = middle -> next;
    middle -> next = reverse(temp);

    return true;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    attail(tail, 15);
    attail(tail, 25);
    attail(tail, 15);
    attail(tail, 135);

    if (copy(head))
    {
        cout << " LL is pelidrome..";
    }
    else
    {
        cout << " LL is not pelidrome..";
    }
}
*/

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

void insert_at_tail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insert_at_head(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

Node *get_mid(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

bool is_palindrome(Node *head)
{
    // Find the middle of the linked list
    Node *middle = get_mid(head);

    // Reverse the second half of the linked list
    Node *second_half = middle->next;
    middle->next = NULL;
    second_half = reverse(second_half);

    // Compare the first half and the second half of the linked list
    Node *first_half = head;
    while (second_half != NULL)
    {
        if (first_half->data != second_half->data)
        {
            return false;
        }
        first_half = first_half->next;
        second_half = second_half->next;
    }

    return true;
}

int main()
{
    Node *node1 = new Node(15);
    Node *head = node1;
    Node *tail = node1;

    insert_at_tail(tail, 20);
    insert_at_tail(tail, 25);
    insert_at_tail(tail, 20);
    insert_at_tail(tail, 15);

    if (is_palindrome(head))
    {
        std::cout << "Linked list is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "Linked list is not a palindrome." << std::endl;
    }

    return 0;
}
