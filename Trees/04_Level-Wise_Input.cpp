#include <iostream>
#include <string.h>
#include <conio.h>
#include <queue>
#include <vector>
using namespace std;
template <typename T>
#include "class_01_Tree.cpp"
void print_levelwise(Tree<int> *head1)
{
    queue<Tree<int> *> pending_nodes;
    pending_nodes.push(head1);
    int i = 0;
    while (pending_nodes.size() != 0)
    {
        cout << (pending_nodes.front())->data << " : ";
        pending_nodes.pop();
        pending_nodes.push(head1->children[i]);
    }
}

Tree<int> *input_Levelwise()
{
    int rootdata;
    cout << "Enter root data : " << endl;
    cin >> rootdata;
    Tree<int> *root = new Tree<int>(rootdata);
    queue<Tree<int> *> pending_nodes;
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        Tree<int> *frontnode = pending_nodes.front();
        pending_nodes.pop();
        cout << " Enter num of childrens of " << frontnode->data << endl;
        int numofchilds;
        cin >> numofchilds;
        for (int i = 0; i < numofchilds; i++)
        {
            int child_data;
            cout << " Enter " << i + 1 << " th child of " << frontnode->data << endl;
            cin >> child_data;
            Tree<int> *child = new Tree<int>(child_data);
            frontnode->children.push_back(child);
            pending_nodes.push(child);
        }
    }
    return root;
}
int main()
{
    Tree<int> *root = input_Levelwise();
    print_levelwise(root);
}