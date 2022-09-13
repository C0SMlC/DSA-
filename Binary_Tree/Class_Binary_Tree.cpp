#include <queue>
template <typename T>
class BinaryTree
{
public:
    T data;
    BinaryTree<T> *left;
    BinaryTree<T> *right;

    BinaryTree(T data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }

    ~BinaryTree()
    {
        delete left;
        delete right;
    }

    BinaryTree<int> *TakeInput()
    {
        int data;
        cout << " Enter Data : ";
        cin >> data;
        if (data == -1)
        {
            return NULL;
        }
        BinaryTree<int> *rootnode = new BinaryTree<int>(data);
        BinaryTree<int> *leftnode = TakeInput();
        BinaryTree<int> *rightnode = TakeInput();
        rootnode->left = leftnode;
        rootnode->right = rightnode;
        return rootnode;
    }
};

void print(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " -";
    if (root->left != NULL)
    {
        cout << " L : " << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << ", R : " << root->right->data;
    }
    cout << endl;
    print(root->left);
    print(root->right);
}
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
BinaryTree<int> *TakeInputLevelwise()
{
    cout << " Enter Root Data : ";
    int rootdata;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return 0;
    }
    BinaryTree<int> *rootnode = new BinaryTree<int>(rootdata);
    queue<BinaryTree<int> *> pending_nodes;
    pending_nodes.push(rootnode);
    while (pending_nodes.size() != 0)
    {
        BinaryTree<int> *front = pending_nodes.front();
        pending_nodes.pop();
        int leftdata, rightdata;
        cout << " Enter the data of left node of " << front->data << " : ";
        cin >> leftdata;
        if (leftdata != -1)
        {
            BinaryTree<int> *leftnode = new BinaryTree<int>(leftdata);
            front->left = leftnode;
            pending_nodes.push(leftnode);
        }
        cout << " Enter the data of right node of " << front->data << " : ";
        cin >> rightdata;
        if (rightdata != -1)
        {
            BinaryTree<int> *rightnode = new BinaryTree<int>(rightdata);
            front->right = rightnode;
            pending_nodes.push(rightnode);
        }
    }
    return rootnode;
}

int countnodes(BinaryTree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + countnodes(root->left) + countnodes(root->right);
}