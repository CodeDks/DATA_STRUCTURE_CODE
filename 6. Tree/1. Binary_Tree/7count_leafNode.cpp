// Code to count the leaf node of the binary tree..

#include <iostream>
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

void inOrderTraversal(node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }

    inOrderTraversal(root->left, count);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    inOrderTraversal(root->right, count);
}

int noOfLeafNode(node *root)
{
    int count = 0;

    inOrderTraversal(root, count);
    return count;
}

int main()
{
    node *root = NULL;

    // Creating a tree
    root = createTree(root);

    cout << "The number of leaf nodes in the tree is : " << noOfLeafNode(root) << endl;

    return 0;
}
