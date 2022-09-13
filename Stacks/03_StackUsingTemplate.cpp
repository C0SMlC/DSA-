#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "StackUsingTemplate.cpp"
int main()
{

    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();
    Stack<char> s1;
    s1.push('A');
    s1.push('B');
    s1.push('C');
    s1.print();
    return 0;
}