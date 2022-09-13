#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
using namespace std;
template <typename T>
#include "class_01_Tree.cpp"

int main()
{

    Tree<int> *root = new Tree<int>(10);
    Tree<int> *child1 = new Tree<int>(20);
    Tree<int> *child2 = new Tree<int>(30);
    root->children.push_back(child1);
    root->children.push_back(child2);

    return 0;
}