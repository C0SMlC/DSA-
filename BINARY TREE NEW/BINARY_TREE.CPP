#include <bits/stdc++.h>
using namespace std;
template <typename T>
class binarytree
{
public:
    T data;
    binarytree<T> *left;
    binarytree<T> *right;

    binarytree(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

binarytree<int> *takeinput()
{
    int data;
    cout << "Enter data : " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    binarytree<int> *root = new binarytree<int>(data);
    binarytree<int> *left = takeinput();
    binarytree<int> *right = takeinput();
    root->left = left;
    root->right = right;
    return root;
}

binarytree<int> *inputlevelwise()
{
    int data;
    cout << "Enter root data : " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    queue<binarytree<int> *> pending_nodes;
    binarytree<int> *root = new binarytree<int>(data);
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        int leftdata, rightdata;
        binarytree<int> *front = pending_nodes.front();
        pending_nodes.pop();
        cout << "Enter left of " << front->data << endl;
        cin >> leftdata;
        if (leftdata != -1)
        {
            binarytree<int> *left = new binarytree<int>(leftdata);
            front->left = left;
            pending_nodes.push(left);
        }
        cout << "Enter right of " << front->data << endl;
        cin >> rightdata;
        if (rightdata != -1)
        {
            binarytree<int> *right = new binarytree<int>(rightdata);
            front->right = right;
            pending_nodes.push(right);
        }
    }
    return root;
}

void printlevel(binarytree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<binarytree<int> *> pending_nodes;
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        binarytree<int> *front = pending_nodes.front();
        cout << front->data << " : ";
        pending_nodes.pop();
        if (front->left != NULL)
        {
            cout << "L - " << front->left->data << " ";
            pending_nodes.push(front->left);
        }
        if (front->right != NULL)
        {
            cout << "R - " << front->right->data << " ";
            pending_nodes.push(front->right);
        }
        cout << endl;
    }
}

void printmirror(binarytree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printmirror(root->left);
        printmirror(root->right);

        binarytree<int> *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}
/*
bool checkbalanced(binarytree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        if (!(checkbalanced(root->left) or checkbalanced(root->right)))
        {
            cout << "BALANCED"
        }
    }
} */
binarytree<int> *inputlw()
{
    int rootdata;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    queue<binarytree<int> *> pending_nodes;
    binarytree<int> *root = new binarytree<int>(rootdata);
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        int leftdata, rightdata;
        binarytree<int> *front = pending_nodes.front();
        pending_nodes.pop();
        cout << "Enter left of " << front->data << endl;
        cin >> leftdata;
        if (leftdata != -1)
        {
            binarytree<int> *left = new binarytree<int>(leftdata);
            front->left = left;
            pending_nodes.push(left);
        }
        cout << "Enter right of " << front->data << endl;
        cin >> rightdata;
        if (rightdata != -1)
        {
            binarytree<int> *right = new binarytree<int>(rightdata);
            front->right = right;
            pending_nodes.push(right);
        }
    }
    return root;
}
int main()
{

    binarytree<int> *root = inputlw();
    printlevel(root);
    //  printmirror(root);
    // printlevel(root);
    // checkbalanced(root);
    return 0;
}