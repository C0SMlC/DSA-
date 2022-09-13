#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "Class_Binary_Tree.cpp"
void postorderprint(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderprint(root->left);
    postorderprint(root->right);
    cout << root->data << " ";
}

void inorderprint(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);
}

void preorderprint(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderprint(root->left);
    preorderprint(root->right);
}
int main()
{
    BinaryTree<int> *root = TakeInputLevelwise();
    cout << endl;
    postorderprint(root);
    cout << endl;
    preorderprint(root);
    cout << endl;
    inorderprint(root);
    return 0;
}