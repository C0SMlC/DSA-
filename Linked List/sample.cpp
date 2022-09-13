#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
node *insertatposition(node *head, int index, int data)
{
    node *newone = new node(data);
    int count = 0;
    node *temp = head;
    if (index == 0)
    {
        newone->next = head;
        head = newone;
        return head;
    }
    while (temp != NULL and count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        node *anew = temp->next;
        temp->next = newone;
        newone->next = anew;
    }
    return head;
}
node *input()
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
};
int main()
{
    node *data = input();
    print(data);
    cout << "\n";
    int i = 0;
    int dat = 99;
    data = insertatposition(data, i, dat);
    print(data);
    return 0;
}