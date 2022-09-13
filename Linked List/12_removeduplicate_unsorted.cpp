#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"
node *removeduplicate(node *head)
{
    node *ptr1;
    node *ptr2;
    node *temp;
    ptr1 = head;
    if (head == NULL)
    {
        return head;
    }

    while (ptr1 != NULL and ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while (ptr2->next != NULL)
        {
            if (ptr2->data == ptr2->next->data)
            {
                ptr2->next = ptr2->next->next;
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
    return head;
}
int main()
{
    node *head = input();
    print(head);
    node *newhead = removeduplicate(head);
    print(newhead);
    return 0;
}