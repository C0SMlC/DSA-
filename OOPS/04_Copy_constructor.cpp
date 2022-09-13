#include <iostream>
using namespace std;
#include "STUDENT_CLASS.cpp"
int main()
{
    student s1(10, 20);
    student s2(s1);
    cout << s2.age << " " << s2.rollnum << endl;
    student *s3 = new student(10, 20);
    s3->display();
    student s4(*s3);
    s4.display();
    return 0;
}