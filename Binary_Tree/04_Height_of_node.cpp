#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "Class_Binary_Tree.cpp"
int numnodes(BinaryTree<int> *root)
{
    int ans = 0;
    if (root == NULL)
    {
        return ans;
    }
    ans++;
    int ans1 = ans + numnodes(root->left);
    int ans2 = ans + numnodes(root->right);
    return ans1 > ans2 ? ans1 : ans2;
}
int main()
{
    BinaryTree<int> *root = TakeInputLevelwise();
    cout << "ANS : " << numnodes(root);
    return 0;
}