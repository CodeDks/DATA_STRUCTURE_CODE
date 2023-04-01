// Height of tree..

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

void levelOrder(node *root)
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
            cout << endl;

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

int Height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = Height(root->left);
    int right = Height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

int main()
{
    node *root = NULL;

    root = CreateTree(root);

    cout << endl
         << "Printing level order traversal " << endl;
    levelOrder(root);

    cout << endl
         << "Height of tree is " << Height(root);
}