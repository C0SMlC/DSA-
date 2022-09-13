#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_LL_class.cpp"
node *input()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->address = newnode;
            tail = newnode;
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