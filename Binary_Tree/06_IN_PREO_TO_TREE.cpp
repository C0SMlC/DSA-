#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "Class_Binary_Tree.cpp"
BinaryTree<int> *buildtreehelper(int *in, int *pre, int instart, int inend, int prestart, int endstart)
{
}
BinaryTree<int> *buildtree(int *in, int *pre, int size)
{
    return buildtreehelper(in, pre, 0, size, -1, 0, size, -1);
}
int main()
{
    int num = 1;
    return 0;
}