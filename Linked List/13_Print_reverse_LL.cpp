#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"

void reversev2(node *head)
{
    if (head == NULL)
    {
        return;
    }
    reversev2(head->next);
    cout << head->data << " ";
}
node *reverse(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    node *rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

int main()
{
    node *head = input();
    print(head);
    node *newnode = reverse(head);
    print(newnode);
}