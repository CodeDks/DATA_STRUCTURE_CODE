// Creation of binary tree

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node (int d)
    {
        this -> data = d;
        this -> right = NULL;
        this -> left = NULL;
    }
};

node *createTree(node *root)
{
    cout << "Enter the  data : " << endl;
    int data;
    cin >> data;
    root = new node (data);
    
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root -> left = createTree(root -> left);

    cout << "Enter data for inserting in right of " << data << endl;
    root -> right = createTree(root -> right);

    return root;
}

int main ()
{
    node *root = NULL;

    //Creating a tree
    root = createTree(root);
    return 0;
}