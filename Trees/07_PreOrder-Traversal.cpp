#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
#include <queue>
using namespace std;
template <typename T>
#include "class_01_Tree.cpp"
void printlevelwise(Tree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Tree<int> *> storable;
    storable.push(root);
    while (!storable.empty())
    {

        Tree<int> *temp = storable.front();
        cout << temp->data << " ";
        storable.pop();
        int i = 0;
        for (int i = 0; i < root->children.size(); i++)
        {
            storable.push(root->children[i]);
        }
        // for (int i = 0; i < root->children.size(); i++)
        // {
        //     printlevelwise(root->children[i]);
        // }
        printlevelwise(root->children[i++]);
    }
}
void preordertraversal(Tree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    for (int i = 0; i < root->children.size(); i++)
    {
        preordertraversal(root->children[i]);
    }
}

void postordertraversal(Tree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    // out << root->data << " ";

    for (int i = 0; i < root->children.size(); i++)
    {
        postordertraversal(root->children[i]);
    }
    cout << root->data << " ";
}

int main()
{
    Tree<int> *root = input_Levelwise();
    printlevelwise(root);
    cout << endl;
    delete root;
}