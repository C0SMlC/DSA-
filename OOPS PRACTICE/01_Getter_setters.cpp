#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    int age;

public:
    int rollno;

    void display()
    {
        cout << age << " " << rollno << endl;
    }

    void set(int age)
    {
        this->age = age;
    }

    int get()
    {
        return this->age;
    }
};
int main()
{
    student s1;
    s1.rollno = 20;
    s1.set(60);
    int age = s1.get();
    cout << age << endl;
    s1.display();
    return 0;
}