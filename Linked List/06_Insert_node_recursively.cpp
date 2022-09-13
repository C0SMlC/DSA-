#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"
node *insert_rec(node *head, int index, int element)
{
    node *temp = head;
    node *newelement = new node(element);
    int count = 0;
    if (index == 0)
    {
        temp = newelement;
        newelement->next = head;
        return temp;
    }
    else if (head != NULL and count < index - 1)
    {
        head = head->next;
        insert_rec(head, index, element);
    }

    else
    {
        node *a = head->next;
        head->next = newelement;
        newelement->next = a;
        return head;
    }
}
int main()
{
    int index, element;
    cout << "Enter elements : " << endl;
    node *head = input();
    print(head);
    cout << "index and elemenr : " << endl;
    cin >> index >> element;
    head = insert_rec(head, index, element);
    print(head);
    return 0;
}