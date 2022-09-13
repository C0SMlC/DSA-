#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
#include <queue>
using namespace std;
template <typename T>
#include "class_01_Tree.cpp"

void printklevel(Tree<int> *root, int k)
{
    if (k == 0)
    {
        cout << root->data << " ";
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printklevel(root->children[i], k - 1);
    }
}

int main()
{
    Tree<int> *root = input_Levelwise();
    cout << " Level : " << endl;
    int level;
    cin >> level;
    printklevel(root, level);
}