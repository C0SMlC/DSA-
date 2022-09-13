#include <iostream>
#include <string.h>
using namespace std;
class copydeep
{
    int age;

public:
    char *name;

    copydeep(int age, char *name)
    {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    copydeep(copydeep const &new1)
    {
        this->age = new1.age;
        this->name = new char[strlen(new1.name) + 1];
        strcpy(this->name, new1.name);
    }

    void display()
    {
        cout << age << " " << name << endl;
    }
};
int main()
{
    char name[] = "Pratik";
    copydeep object1(10, name);
    object1.display();
    name[1] = 'P';
    copydeep object2(11, name);
    object2.display();
    object1.display();
    copydeep object3(object2);
    object3.name[0] = ' ';
    object1.display();
    object2.display();
    object3.display();
    return 0;
}