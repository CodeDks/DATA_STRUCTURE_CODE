// Given a Binary Tree. Return true if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false.

// An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.

// Creation of binary tree

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

pair<bool, int> isSumTreeFast(node *root)
{
    // Base case
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    // leaf node..
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> leftAns = isSumTreeFast(root->left);
    pair<bool, int> rightAns = isSumTreeFast(root->right);

    bool isLeftSumTree = leftAns.first;
    bool isRightSumTree = rightAns.first;

    int leftSum = leftAns.second;
    int rightSum = rightAns.second;

    bool codn = root->data == leftSum + rightSum;

    pair<bool, int> ans;

    if (isLeftSumTree && isRightSumTree && codn)
    {
        ans.first = true;
        ans.second = root->data + leftSum + rightSum;
    }
    else
    {
        ans.first = false;
        ans.second = root->data + leftSum + rightSum;
    }

    return ans;
}

bool isSumTree(node *root)
{
    return isSumTreeFast(root).first;
}

int main()
{
    node *root = NULL;

    // Creating a tree
    root = createTree(root);
    return 0;

    if (isSumTree(root))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}