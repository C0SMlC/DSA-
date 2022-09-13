#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    int sr_no;

public:
    char *name;

    Student(Student const &s)
    {
        this->sr_no = s.sr_no;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }
    Student()
    {
    }
    Student(int num, char *name)
    {
        sr_no = num;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    void display()
    {
        cout << sr_no << " " << name << endl;
    }
};
int main()
{

    char name[] = "Pratik";
    Student s1(10, name);
    s1.display();
    Student s2(s1);
    s2.display();

    s2.name[1] = 'T';
    s1.display();
    s2.display();
    return 0;
}