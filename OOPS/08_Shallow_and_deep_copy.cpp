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
    void display()
    {
        cout << age << " " << name;
    }
};
int main()
{
    char name[] = "abcd";
    student s1(10, name);
    s1.display();
    return 0;
}