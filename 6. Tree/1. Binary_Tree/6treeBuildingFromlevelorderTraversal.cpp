// Building a binary tree form level order traversal..

#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

// node *createTree(node *root)
// {
//     cout << "Enter the data : ";
//     int data;
//     cin >> data;

//     root = new node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Enter the data for inserting in the left of " << data << endl;
//     root->left = createTree(root->left);

//     cout << "Enter the data for inserting in the right of " << data << endl;
//     root->right = createTree(root->right);

//     return root;
// }

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hh..
            cout << endl;

            // queue still has child nodes..
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void buildTreeFromLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "Enter the data for root ";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter the data for left of " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter the data for right of " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    // Creating a tree
    // root = createTree(root);

    buildTreeFromLevelOrder(root);

    cout << "Printing the inorder traversal of the tree : " << endl;
    levelOrderTraversal(root);

    return 0;
}