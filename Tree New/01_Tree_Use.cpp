#include <bits/stdc++.h>
#include "Tree_class.h"
using namespace std;

treenode<int> *takeinput()
{
    int rootdata, n;
    cout << "Enter root : " << endl;
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);
    cout << "Enter number of children : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        treenode<int> *child = takeinput();
        root->children.push_back(child);
    }
    return root;
}

void printtree(treenode<int> *root)
{
    cout << root->data << " - ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " , ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printtree(root->children[i]);
    }
}
void printlevelwise(treenode<int> *root)
{
    queue<treenode<int> *> pending_nodes;
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        treenode<int> *front = pending_nodes.front();
        pending_nodes.pop();
        cout << front->data << " : ";
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data << " ";
            pending_nodes.push(front->children[i]);
        }
        cout << endl;
    }
}
treenode<int> *takeinputlevelwise()
{
    int rootdata;
    cout << "Enter data of root : " << endl;
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);
    queue<treenode<int> *> pending_nodes;
    pending_nodes.push(root);
    while (pending_nodes.size() != 0)
    {
        treenode<int> *front = pending_nodes.front();
        pending_nodes.pop();
        cout << "Enter number childrens of " << front->data << endl;
        int count;
        cin >> count;
        for (int i = 0; i < count; i++)
        {
            cout << "Enter " << i + 1 << "th"
                 << " child of " << front->data << endl;
            int newchild;
            cin >> newchild;
            treenode<int> *child = new treenode<int>(newchild);
            front->children.push_back(child);
            pending_nodes.push(child);
        }
    }
    return root;
}
int findnumofnodes(treenode<int> *root)
{
    int static num = 0;
    if (root == NULL)
    {
        return num;
    }
    else
    {
        num++;
        for (int i = 0; i < root->children.size(); i++)
        {
            findnumofnodes(root->children[i]);
        }
        return num;
    }
}

int numofleafnodes(treenode<int> *root)
{
    int ans = 0;

    if (root->children.size() == 0)
    {
        return ans + 1;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += numofleafnodes(root->children[i]);
    }
    return ans;
}
treenode<int> *larger_than_given(int num, treenode<int> *root)
{
    // EDGE CASE:

    if (root == NULL)
    {
        return NULL;
    }

    // initialising ans with NULL
    treenode<int> *ans = NULL;

    // checking if eoot->data > num
    if (root->data > num)
    {
        ans = root;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        treenode<int> *temp = larger_than_given(num, root->children[i]);
        if (temp == NULL)
        {
            continue;
        }
        else
        {
            if (ans == NULL)
            {
                ans = temp;
            }
            else if (temp->data < ans->data)
            {
                ans = temp;
            }
        }
    }
    return ans;
}
treenode<int> *second_larger(treenode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    treenode<int> *first = root;
    treenode<int> *second = NULL;
    for (int i = 0; i < root->children.size(); i++)
    {
        treenode<int> *temp = second_larger(root->children[i]);
        if (temp == NULL)
        {
            continue;
        }
        else
        {
            if (first->data < temp->data)
            {
                second = first;
                first = temp;
            }
        }
    }
    return first;
}
int ispresent(treenode<int> *root, int num)
{
    int static indicator = 0;
    if (root == NULL)
    {
        return 0;
    }
    else if (root->data == num)
    {
        indicator = 1;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        ispresent(root->children[i], num);
    }
    return indicator;
}

int maxsumnode(treenode<int> *root)
{
    int maxsum = 0;
    if (root == NULL)
    {
        return 0;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        int temp = root->children[i]->data + maxsumnode(root->children[i]);
        if (temp > maxsum)
        {
            maxsum = temp;
        }

        // return maxsum;
    }

    return maxsum;
}
int helper(treenode<int> *root)
{
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += helper(root->children[i]);
    }
    return ans;
}

int findHeight(treenode<int> *root)
{
    int ans = 0;
    // cout << root->children.size() << endl;
    for (int i = 0; i < root->children.size(); i++)
    {

        if (ans < helper(root->children[i]))
        {
            ans = helper(root->children[i]);
        }
    }
    return ans + 1;
}
int main()
{
    treenode<int> *root = takeinputlevelwise();
    treenode<int> *temp1 = root;
    cout << findHeight(root) << endl;
    // printtree(temp1);
    // printlevelwise(root);
    // cout << "NUM OF NODES : " << findnumofnodes(root) << endl;
    // cout << "Height of tree : " << heightoftree(root) << endl;
    // // cout << "Height of tree : " << heightoftree(root) << endl;
    // cout << "leafnode of tree : " << numofleafnodes(root) << endl;
    // int num;
    // cout << "Num : " << endl;
    // cin >> num;
    // treenode<int> *temp = larger_than_given(num, temp1);
    // cout << temp->data << endl;
    // treenode<int> *temp = second_larger(temp1);
    // cout << temp->data << endl;
    // int count, temp;
    // cout << "Enter number : " << endl;
    // cin >> count;
    // temp = ispresent(root, count);
    // if (temp == 1)
    // {
    //     cout << "PResent ";
    // }
    // return 0;
    // cout << maxsumnode(root);
}
// TODO DIHDHKD