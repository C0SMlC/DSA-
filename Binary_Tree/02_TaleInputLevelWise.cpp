#include <iostream>
#include <queue>
#include <string.h>
#include <conio.h>
using namespace std;
#include "Class_Binary_Tree.cpp"

BinaryTree<int> *TaakeInputLevelwise()
{
    cout << " Enter Root Data : ";
    int rootdata;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    BinaryTree<int> *rootnode = new BinaryTree<int>(rootdata);
    queue<BinaryTree<int> *> pending_nodes;
    pending_nodes.push(rootnode);
    while (pending_nodes.size() != 0)
    {
        BinaryTree<int> *front = pending_nodes.front();
        pending_nodes.pop();
        int leftdata, rightdata;
        cout << " Enter the data of left node of " << front->data << " : ";
        cin >> leftdata;
        if (leftdata != -1)
        {
            BinaryTree<int> *leftnode = new BinaryTree<int>(leftdata);
            front->left = leftnode;
            pending_nodes.push(leftnode);
        }
        cout << " Enter the data of right node of " << front->data << " : ";
        cin >> rightdata;
        if (rightdata != -1)
        {
            BinaryTree<int> *rightnode = new BinaryTree<int>(rightdata);
            front->right = rightnode;
            pending_nodes.push(rightnode);
        }
    }
    return rootnode;
}

int main()
{
    BinaryTree<int> *root = TakeInputLevelwise();
    print(root);
}