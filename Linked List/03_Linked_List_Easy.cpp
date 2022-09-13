#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"
node *input()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
};
int main()
{
    node *head = input();
    print(head);
    return 0;
}
