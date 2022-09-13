#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"
int search(node *head, int element)
{
    int static count = 0;
    node *temp = head;
    if (temp != NULL)
    {
        if (temp->data == element)
        {
            return count;
        }
        else
        {
            temp = temp->next;
            count++;
            search(temp, element);
        }
    }
    else
        return -1;
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
    int element;
    cout << "Enter element : " << endl;
    cin >> element;
    cout << search(head, element);
    return 0;
}