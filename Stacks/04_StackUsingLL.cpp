#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "StackUsingLL.cpp"
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.getsize();
    s.print();
    s.pop();
    s.print();

    return 0;
}