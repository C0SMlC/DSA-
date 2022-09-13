#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"

node *swap(node *head, int index1, int index2)
{
    node *temp = head;
    node *temp1 = head;
    int count = 0;
    while (temp != NULL and count < index1 - 1)
    {
        temp = temp->next;
    }

    while (temp1 != NULL and count < index2 - 1)
    {
        temp1 = temp1->next;
    }
    node *a = temp->next;
    temp->next = temp1->next;
    temp1->next = a;
    return head;
}
int main()
{
    node n1(1);
    node *head = &n1; // HOLDS ADDRESS OF NEXT NODE HENCE THE TYPE NODE
    node n2(2);
    node n3(3);
    node n4(4);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    print(head);
    int element, ele;
    cout << "Enter element : " << endl;
    cin >> element >> ele;
    node *newh = swap(head, element, ele);
    print(newh);
    return 0;
}