#include <bits/stdc++.h>
using namespace std;
#include "Class_Binary_Tree.cpp"

pair<int, int> heightdiameter(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    pair<int, int> leftans = heightdiameter(root->left);
    pair<int, int> rightans = heightdiameter(root->right);
    int ld = leftans.second;
    int rh = rightans.first;
    int rd = rightans.second;
    int lh = leftans.first;
    int height = 1 + int(max(lh, rh));
    int diameter = max((lh + rh), max(ld, rd));
    pair<int, int> p;
    p.first = height;
    p.second = diameter;
    return p;
}

int main()
{
    BinaryTree<int> *root = TakeInputLevelwise();
    pair<int, int> temp = heightdiameter(root);
    system("cls");
    cout << "Height : " << temp.first << "\n"
         << "Diameter: " << temp.second << endl;
    return 0;
}