class node
{
public:
    int data;
    node *address;
    node(int data)
    {
        this->data = data;
        address = NULL;
    }
};
void print(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->address;
    }
}
