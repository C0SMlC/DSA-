#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
template <typename T>
#include "07_Class_Static_Queue.h"
int main()
{
    queue<int> q1(5);
    q1.enq(10);
    q1.enq(20);
    q1.enq(30);
    q1.enq(40);
    q1.enq(50);
    q1.print();
    q1.deq();
    q1.deq();
    q1.deq();
    q1.getfirst();
    q1.getsize();
    q1.enq(50);
    q1.enq(50);
    q1.getfirst();

    return 0;
}