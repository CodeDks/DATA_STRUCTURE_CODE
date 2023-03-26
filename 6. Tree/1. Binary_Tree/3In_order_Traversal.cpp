// Level order traversal..

#include <iostream>
using namespace std;
#include <queue>

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

node *createTree(node *root)
{
    cout << "Enter the  data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = createTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = createTree(root->right);

    return root;
}

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

void inOrderTraversal (node *root)
{
    //Base case
    if (root == NULL)
    {
        return;
    }

    // Recursive case
    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);
}

int main()
{
    node *root = NULL;

    // Creating a tree
    root = createTree(root);

    cout << "Printing the level order traversal output.." << endl;

    levelOrderTraversal(root);


    cout << endl << "Printing the inorder Traversal " << endl;
    inOrderTraversal(root);
    

    return 0;
}