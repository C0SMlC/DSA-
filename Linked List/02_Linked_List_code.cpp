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
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        cout << " ";
        temp = temp->next;
    }
}
node *deletenode(node *head, int index)
{
    node *temp = head;
    int count = 0;
    if (index == 0)
    {
        temp = temp->next;
        return temp;
    }

    while (temp != NULL and count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        node *a = temp->next;
        node *b = a->next;
        temp->next = b;
    }
    return head;
};

int main()
{
    // STATICALLY
    node n1(1);
    node *head = &n1; // HOLDS ADDRESS OF NEXT NODE HENCE THE TYPE NODE
    node n2(2);
    node n3(3);
    node n4(4);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;

    print(head);
    int index;
    cout << "Index : " << endl;
    cin >> index;
    node *zon = deletenode(head, index);
    print(zon);
    return 0;
}