#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "DynamicStack.cpp"
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.print();
    s.TopElement();
    s.pop();
    s.TopElement();
    s.pop();
    s.TopElement();
    s.pop();
    s.TopElement();
    s.pop();
    return 0;
}