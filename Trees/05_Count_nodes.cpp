#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
#include <queue>

using namespace std;
template <typename T>

#include "class_01_Tree.cpp"

int main()
{
    Tree<int> *root = input_Levelwise();
    print(root);
    cout << findHeight(root) << endl;
    cout << "Leafnodes : " << leafnodes(root) << endl;
    return 0;
}
// 10 2 2 4 1 3 1 5 1 6 0 0