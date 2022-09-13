#include <iostream>
#include <string.h>
#include <conio.h>
#include <queue>
using namespace std;
#include "Class_Binary_tree.cpp"
//#include "02_TaleInputLevelWise.cpp"

void searchnodes(BinaryTree<int> *root, int element)
{
    if (root == NULL)
    {
        return;
    }

    if (root->data == element)
    {
        cout << " Presnet";
        return;
    }
    searchnodes(root->left, element);
    searchnodes(root->right, element);
    return;
}
int main()
{
    BinaryTree<int> *root = TakeInputLevelwise();
    cout << countnodes(root) << endl;
    print(root);
    cout << " Enter a element to be search : ";
    int ele;
    cin >> ele;
    searchnodes(root, ele);
    // cout << endl;
    // if (searchnodes(root, ele))
    // {
    //     cout << " Present " << endl;
    // }
    return 0;
}
//  10 20 30 40 50 60 70 -1 -1 -1 -1