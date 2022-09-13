#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "Class_Binary_Tree.cpp"

BinaryTree<int> *TakeInput()
{
    int data;
    cout << " Enter Data : ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    BinaryTree<int> *rootnode = new BinaryTree<int>(data);
    BinaryTree<int> *leftnode = TakeInput();
    BinaryTree<int> *rightnode = TakeInput();
    rootnode->left = leftnode;
    rootnode->right = rightnode;
    return rootnode;
}
void print(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " -";
    if (root->left != NULL)
    {
        cout << " L : " << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << ", R : " << root->right->data;
    }
    cout << endl;
    print(root->left);
    print(root->right);
}
int main()
{
    BinaryTree<int> *b1 = TakeInput();
    // BinaryTree<int> *b1 = new BinaryTree<int>(10);
    // BinaryTree<int> *left = new BinaryTree<int>(20);
    // BinaryTree<int> *right = new BinaryTree<int>(30);
    // b1->left = left;
    // b1->right = right;
    print(b1);
    return 0;
}