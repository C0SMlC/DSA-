#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

#include "01_Linked_List.cpp"

void findmidpoint(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data << endl;
}

void findmidpointarray(int *arr)
{
    int* pointer1 =arr;
    int* pointer2 =arr+2
}

int main()
{
    // node *head = input();
    // findmidpoint(head);=
    int arr[] = {0, 1, 2, 3, 4, 5};
    findmidpointarray(arr);
    return 0;
}