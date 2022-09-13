#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    char *name;

    student(int age, char *name) // DEEP COPY
    {
        this->age = age;
        name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    student s1(20, "")
}