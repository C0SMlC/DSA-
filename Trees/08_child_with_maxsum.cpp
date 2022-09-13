#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
#include <queue>
using namespace std;
template <typename T>
#include "class_01_Tree.cpp"

int preordertraversal(Tree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        sum += root->children[i]->data;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        if (sum > preordertraversal(root->children[i]))
        {
            // cout << root->data << " ";
            return root->children[i]->data;
        }
        return root->children[i]->data;
    }
}

int main()
{

    Tree<int> *root = input_Levelwise();
    int sum;
    sum = preordertraversal(root);
    cout << sum << " ";
}