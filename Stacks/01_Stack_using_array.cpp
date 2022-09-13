#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "StackUsingArray.cpp"
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();
    s.TopElement();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}