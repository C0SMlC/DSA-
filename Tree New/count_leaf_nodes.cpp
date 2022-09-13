#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
#include <queue>
using namespace std;
template <typename T>
#include "class_01_Tree.cpp"

int countleafnodes(Tree<int> *root)
{
    int ans = 0;
    if (root == NULL)
    {
        return 0;
    }

    else if (root->children.size() == 0)
    {
        return 1;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        ans = ans + countleafnodes(root->children[i]);
    }
    return ans;
}

int main()
{
    Tree<int> *root = input_Levelwise();
    cout << countleafnodes(root);
}