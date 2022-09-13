#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
using namespace std;
template <typename T>
#include "class_01_Tree.cpp"
Tree<int> *input()
{
    int rootdata;
    cout << "Enter a root node : " << endl;
    cin >> rootdata;
    Tree<int> *root = new Tree<int>(rootdata);
    int childs;
    cout << "Enter childrens of node - " << rootdata << " : ";
    cin >> childs;
    for (int i = 0; i < childs; i++)
    {
        Tree<int> *child = input();
        root->children.push_back(child);
    }
    return root;
}
int main()
{

    Tree<int> *root = input();
    print(root);
    return 0;
}