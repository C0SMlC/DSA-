#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int age;
    char *name;

public:
    student(int age, char *name)
    {
        this->age = age;
        // SHALLOW COPY
        //  this-> name = name;
        //  DEEP COPY
        this->name = new char[strlen(name) + 1]; // +1 for null
        strcpy(this->name, name);
    }
    // custom copy constructor

    student(student const &s)
    {
        this->age = s.age;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }
    void display()
    {
        cout << age << " " << name << endl;
    }
};
int main()
{
    char name1[] = "Pratik";
    char name2[] = "Tanvi";
    student s1(20, name1);
    student s2(17, name2);
    student s3(s1);
    s1.display();
    s2.display();
    s3.display();
}