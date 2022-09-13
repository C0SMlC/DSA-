#include <bits/stdc++.h>
using namespace std;
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

    node *takeinput()
    {
        int data;
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
                tail = newnode;
            }
            cin >> data;
        }
        return head;
    }
};

node *addatindex(node *head, int index, int element)
{
    node *oghead = head;
    int i = 1;
    node *newnode = new node(element);
    if (index == 0)
    {
        newnode->next = head->next;
        // head = newnode;
        return newnode;
    }
    while (i != index and head != NULL)
    {
        head = head->next;
        i++;
    }
    if (head != NULL)
    {
        newnode->next = head->next;
        head->next = newnode;
        return oghead;
    }
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int findlength(node *head)
{
    int static length = 0;
    if (head != NULL)
    {
        length++;
        findlength(head->next);
    }
    else
        return length;
}

void printatindex(node *head, int index)
{
    int static i = 0;
    if (i == index)
    {
        cout << head->data << endl;
    }
    else
    {
        i++;
        printatindex(head->next, index--);
    }
}
node *deleteatindexindex(node *head, int index)
{
    static node *temp = head;
    int static i = 0;
    if (index == 0)
    {
        node *a = head;
        head = head->next;
        delete a;
        return head;
    }

    if (i == index - 1)
    {
        node *b = head->next;
        head->next = head->next->next;
        delete b;
        return temp;
    }
    else if (head != NULL)
    {
        i++;
        deleteatindexindex(head->next, index);
    }
}

// node *evenafterodd(node *head)
// {
//     node *temp = head;
//     node *prev = NULL;
//     node *curr = NULL;
//     node *next = NULL;
//     while (head->next->next != NULL)
//     {
//         curr = head;
//         while (temp->next == NULL)
//         {
//             if (temp->data % 2 == 0)
//             {
//                 next->data = temp->data;
//             }
//             else if (temp->data % 2 != 0)
//             {
//                 next->data =
//             }
//         }
//     }
// }

node *removeduplicates(node *head)
{
    node *temp = head;
    node *newnode = head;
    while (temp != NULL and temp->next != NULL)
    {
        while (temp->next->data != newnode->data)
        {
            newnode->next = temp->next;
        }
        temp = temp->next;
    }

    return newnode;
}

node * sumoftwo(node* l1,nide* l2)
{
    node newone;
    int carry = 0;
    int sum;
    while(l1->next != NULL and l2->next != NULL)
    {
        newonel1->data
    }
}
int main()
{
    node n1;
    node *head = n1.takeinput();
    // print(head);
    // int num = findlength(head);
    // cout << num;
    // int index = 2;
    // head = deleteatindexindex(head, index);
    // printatindex(head, index);
    // addatindex(head, 3, 12);
    // print(head);
    node *newnode = removeduplicates(head);
    print(newnode);
    return 0;
}