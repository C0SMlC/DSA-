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

class stack
{

    node *head;
    int size;

public:
    stack()
    {
        head = NULL;
        size = 0;
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
        node *newnode = new node(element);
        newnode->next = head;
        head = newnode;
        size++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "STack is Empty" << endl;
        }

        node *temp = head;
        cout << head->data << " is popped" << endl;
        head = head->next;
        size--;
        delete temp;
    }

    void print()
    {
        node *ptr;
        if (head == NULL)
        {
            cout << "Empty" << endl;
        }
        else
        {
            ptr = head;
            cout << "Elements are : ";
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
            cout << endl;
        }
    }
};