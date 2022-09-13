#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "Queue_Using_LL.cpp"
int main()
{
    queue q1;
    q1.push(1000);
    q1.push(45);
    // q1.print();
    q1.getsize();
    cout << q1.isEmpty();
    q1.getfirst();
    return 0;
}