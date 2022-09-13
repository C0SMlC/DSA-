#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "01_Linked_List.cpp"

int main()
{
    cout << "Enter linked list{-1 to exit) : " << endl;
    node *head = input();
    print(head);
    // int var, car;
    // cout << "\nEnter index and element : " << endl;
    // cin >> var >> car;
    // head = insert_at_index(head, var, car);
    // print(head);
    // int index;
    // cout << "\nEnter the index to delete : " << endl;
    // cin >> index;
    node *newhead = deletenode(head, index);
    // print(newhead);
    cout << counter(head) << endl;
    return 0;
}