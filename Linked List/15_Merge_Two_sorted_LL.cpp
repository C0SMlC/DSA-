#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

#include "01_Linked_List.cpp"
node *merge(node *head1, node *head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    node *dummy = new node(-1);
    node *temp3 = dummy;

    while (temp1 != NULL and temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
        }

        else
        {
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }

    if (temp1 != NULL)
    {
        temp3->next = temp1;
    }

    if (temp2 != NULL)
    {
        temp3->next = temp2;
    }

    return dummy->next;
}
int main()
{
    node *newnode1 = input();
    print(newnode1);
    node *newnode2 = input();
    print(newnode2);
    node *newnode3 = merge(newnode1, newnode2);
    print(newnode3);
    return 0;
}