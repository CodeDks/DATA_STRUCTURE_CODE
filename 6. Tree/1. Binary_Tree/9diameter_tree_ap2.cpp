// Diameter of the tree..
// Aproach2..

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
        this->left = NULL;
        this->right = NULL;
    }
};

node *CreateTree(node *root)
{
    cout << "Enter the data : ";
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in the left of " << data << endl;
    root->left = CreateTree(root->left);

    cout << "Enter the data for inserting in the right of " << data << endl;
    root->right = CreateTree(root->right);

    return root;
}

pair <int, int> diameterFast(node *root)
{
    // Base case
    if (root == NULL)
    {
        pair <int, int> p = make_pair(0,0);
        return p;
    }

    // Recursive case
    pair <int, int> left = diameterFast(root->left);
    pair <int, int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;   

    pair <int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}
int diameter(node *root)
{
    return diameterFast(root).first;
}


int main()
{
    node *root = NULL;

    root = CreateTree(root);

    cout << endl
         << "Diameter of the tree is " << diameter(root);
    return 0;
}