#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "Class_Binary_Tree.cpp"
void printinrange(BinaryTree<int> *root, int num1, int num2)
{
    if (root == NULL)
    {
        return;
    }
    if (num2 <= root->data or num1 <= root->data)
    {
        printinrange(root->left, num1, num2);
        cout << root->data << " ";
    }
    printinrange(root->right, num1, num2);

    // if (num2 > root->data)
    // {
    //     printinrange(root->right, num1, num2);
    //     cout << root->data << " ";
    // }
}
int main()
{
    int num1, num2;
    BinaryTree<int> *root = TakeInputLevelwise();
    cout << " Enter num1 and num2 : " << endl;
    cin >> num1 >> num2;
    printinrange(root, num1, num2);
    return 0;
}