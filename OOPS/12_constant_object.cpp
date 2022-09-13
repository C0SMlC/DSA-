#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int age;
    char *name;

public:
    student()
    {
    }
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
    void setage(int num)
    {
        age = num;
    }
    student(student const &s)
    {
        this->age = s.age;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }
    void display() const
    {
        cout << age << " " << name << endl;
    }
};
int main()
{
    student const s1;
    s1.display();
}