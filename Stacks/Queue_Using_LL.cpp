class node
{
public:
    int data;
    node *next;

    node()
    {
    }

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class queue
{
    node *head;
    node *tail;
    int size;

public:
    queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void getfirst()
    {
        if (isEmpty())
            return;
        else
            cout << head->next->data << endl;
    }

    void getsize()
    {
        cout << size << endl;
    }
    bool isEmpty()
    {
        return size == 0;
    }

    void push(int element)
    {
        node *newnode = new node[element];
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        tail->next = newnode;
        tail = newnode;
        size++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << " Queue is Empty " << endl;
            return;
        }
        head = head->next;
    }
};