#include <iostream>
using namespace std;
#include "STUDENT_CLASS.cpp"
int main()
{
    student s1(1, 2);
    student s2(2, 3);
    student s4(s2);
    s4 = s1; // copy assignment operator
    s4.display();
}