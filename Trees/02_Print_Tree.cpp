#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
using namespace std;
template <typename T>

#include "class_01_Tree.cpp"
void print(Tree<int> *root)
{
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
}
int main()
{

    Tree<int> *root = new Tree<int>(10);
    Tree<int> *child1 = new Tree<int>(20);
    Tree<int> *child2 = new Tree<int>(30);
    root->children.push_back(child1);
    root->children.push_back(child2);
    print(root);
    return 0;
}