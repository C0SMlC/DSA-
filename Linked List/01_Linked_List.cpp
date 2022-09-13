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
        this->next = NULL;
    }
};

int length(node *head)
{
    int count = 1;
    while (head->next != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
node *insert_at_index(node *head, int index, int element)
{
    node *temp = head;
    node *newnode = new node(element);
    int count = 0;
    if (index == 0)
    {
        newnode->next = head;
        head = newnode;
    }

    while (temp != NULL and count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        node *a = temp->next;
        temp->next = newnode;
        newnode->next = a;
    }
    return head;
}

node *deletenode(node *head, int index)
{
    int count = 0;
    if (index == 0)
    {
        head = head->next;
        return head;
    }

    while (head != NULL and count < index - 1)
    {
        head = head->next;
        count++;
    }
    if (head != NULL)
    {
        node *a = head->next;
        node *b = a->next;
        head->next = b;
        delete a;
    }
    return head;
};

int counter(node *head)
{
    int count = 0;
    if (head->next != NULL)
    {
        head = head->next;
        count++;
        counter(head);
    }
    else
        return count;
}

node *append(node *head, int appendindex)
{
    node *temp = head;
    node *tail = head;
    int counter = -appendindex;
    while (temp->next != NULL)
    {
        if (counter >= 0)
        {
            tail = tail->next;
        }
        temp = temp->next;
        counter++;
    }
    temp->next = head;
    head = tail->next;
    tail->next = NULL;
    return head;
}

node *input()
{
    int data;
    cout << "Enter data : " << endl;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode; // tail = tail->next;
        }
        cin >> data;
    }
    return head;
};