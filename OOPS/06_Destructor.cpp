#include <iostream>
using namespace std;
#include "STUDENT_CLASS.cpp"
int main()
{
    student s1(1, 2);
    student s2(2, 3);
    s1.display();
    s1.display();
    student *s3 = new student(10, 20);
    delete s3;
}