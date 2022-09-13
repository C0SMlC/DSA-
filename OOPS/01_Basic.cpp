#include <iostream>
using namespace std;
class student
{
public:
    int age;
    int rollnum;
};
int main()
{
    student s1;
    s1.age = 10;
    s1.rollnum = 20;
    cout << s1.age << " " << s1.rollnum << endl;
    student *s3 = new student;
    student *s4 = new student;
    (*s3).age = 456;
    s4->age = 500;
    cout << (*s3).age << endl;
    cout << (*s4).age << endl;
    return 0;
}