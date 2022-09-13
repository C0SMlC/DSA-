#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
#include "Class_Binary_Tree.cpp"
int minimum(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return 999;
    }
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}
int maximum(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return -999;
    }
    return max(root->data, max(maximum(root->left), maximum(root->right)));
}
bool cheak_BST(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return false;
    }
    int smallnum = minimum(root->left);
    int bignum = maximum(root->right);
    return (smallnum < root->data) and (bignum >= root->data) and (cheak_BST(root->left)) and (cheak_BST(root->right));
}
int main()
{
    BinaryTree<int> *BT = TakeInputLevelwise();
    system("cls");
    if (cheak_BST(BT))
    {
        cout << " True" << endl;
        return 0;
    }
    cout << "False" << endl;
    return 0;
}