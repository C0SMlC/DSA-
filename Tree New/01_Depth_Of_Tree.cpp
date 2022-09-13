#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
#include <queue>
using namespace std;
template <typename T>
#include "class_01_Tree.cpp"

void printatdepth(Tree<int> *root, int d)
{
    if (d == 0)
    {
        cout << root->data
             << " ";
    }
    else
    {
        for (int i = 0; i < root->children.size(); i++)
        {
            printatdepth(root->children[i], d - 1);
        }
    }
    return;
}

int main()
{
    Tree<int> *root = input_Levelwise();
    printatdepth(root, 1);
}