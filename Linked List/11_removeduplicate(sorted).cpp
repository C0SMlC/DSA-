#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"
// void *removeduplicate(node *head)
// {
//     node *current = head;
//     node *pointer;
//     if (current == NULL)
//     {
//         return head;
//     }

//     while (current->next != NULL)
//     {
//         if (current->data == current->next->data)
//         {
//             pointer = current->next->next;
//             free(current->next);
//             current->next = pointer;
//         }
//         else
//         {
//             current = current->next;
//         }
//     }
// }

node *removeduplicate(node *head)
{
    node *temp = head;
    while (temp->next != NULL and temp != NULL)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}

int main()
{
    node *head = input();
    print(head);
    head = removeduplicate(head);
    print(head);
    return 0;
}