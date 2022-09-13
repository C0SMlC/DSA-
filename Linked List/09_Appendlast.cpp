#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"

node *appendn(node *head, int num)
{
    if (num == 0)
        return head;

    node *ptr1 = head;
    node *ptr2 = head;

    int counter = 0;

    while (counter < num)
    {
        ptr1 = ptr1->next;
        counter++;
    }

    if (ptr1 == NULL)
    {
        return head;
    }

    while (ptr1->next != NULL)
    {
        ptr2 = ptr2->next;
        ptr1 = ptr1->next;
    }
    node *temp = head;
    head = ptr2->next;
    ptr2->next = NULL;
    ptr1->next = temp;

    return head;
}

int main()
{
    node n1(1);
    node *head = &n1; // HOLDS ADDRESS OF NEXT NODE HENCE THE TYPE NODE
    node n2(2);
    node n3(3);
    node n4(4);
    // node n5(5);
    // node n6(6);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    // n4.next = &n5;
    // n5.next = &n6;

    print(head);

    node *newone = appendn(head, 2);
    print(newone);
    return 0;
}