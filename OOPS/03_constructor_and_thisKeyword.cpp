#include <iostream>
using namespace std;
class student
{
private:
    int age;
    int rollnum;

public:
    //  DEFAULT CONSTRUVTOR
    student()
    {
        cout << "Called" << endl;
    }
    student(int age, int rollnum)
    {
        (*this).age = age;
        (*this).rollnum = rollnum;
    }
    void get()
    {
    }
    void set()
    {
        age = 16;
        rollnum = 20;
    }
    void display()
    {
        cout << age << " " << rollnum << endl;
    }
};
int main()
{
    student s1;
    student s2(10, 100);
    s2.display();
}