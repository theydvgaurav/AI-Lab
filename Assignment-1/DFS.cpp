// DFS Traversal in a Binary Tree
// Name - Gaurav Yadav
// Roll No - 11911038
// Branch - CSE

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        this->left = NULL;
        this->right = NULL;
        this->data = val;
    }
};

vector<int> v;

void dfs(Node *root)
{
    if (root == NULL)
        return;
    v.push_back(root->data);
    dfs(root->left);
    dfs(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    v.clear();
    dfs(root);

    for (auto it : v)
        cout << it << " ";

    return 0;
}