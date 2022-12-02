// BFS Traversal in a Binary Tree
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

vector<int> bfs(Node *root)
{
    vector<int> v;
    v.clear();
    if (root == NULL)
        return v;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            v.push_back(temp->data);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }

    return v;
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

    for (auto it : bfs(root))
        cout << it << " ";

    return 0;
}