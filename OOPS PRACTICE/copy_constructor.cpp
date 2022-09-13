#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    char *name;

    // student(int age, char *name)        DEEP COPY
    // {
    //     this->age = age;
    //     name = new char[strlen(name) + 1];
    //     strcpy(this->name, name);
    // }

    void display()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    student s1, s2;
    char name[] = "PRatik";
    s1.age = 20;
    s2.age = 25;
    s1.name = name;
    s1.display();
    name[2] = 'T';
    s2.name = name;
    s1.display();
    s2.display();
    return 0;
}

/*
PRatik 20
PRTtik 20
PRTtik 25
SHALLOW COPY
*/