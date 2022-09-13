
class Tree
{
public:
    T data;
    vector<Tree<T> *> children;

    Tree(T data)
    {
        this->data = data;
    }
    ~Tree()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};
int leafnodes(Tree<int> *root)
{
    int ans = 0;

    if (root->children.size() == 0)
    {
        return ans + 1;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += leafnodes(root->children[i]);
    }
    return ans;
}
int numnodes(Tree<int> *root)
{
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += numnodes(root->children[i]);
    }
    return ans;
}

int findHeight(Tree<int> *root)
{
    int ans = 0;
    cout << root->children.size() << endl;
    for (int i = 0; i < root->children.size(); i++)
    {

        if (ans < numnodes(root->children[i]))
        {
            ans = numnodes(root->children[i]);
        }
    }
    return ans + 1;
}
Tree<int> *input_Levelwise()
{
    int rootdata;
    cout << "Enter root data : " << endl;
    cin >> rootdata;
    if (rootdata)
    {
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
    return 0;
}
void print(Tree<int> *root)
{
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
}