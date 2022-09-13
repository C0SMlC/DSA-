#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    int age;

public:
    int rollno;

    student(int age, int rollno)
    {
        this->age = age;
        this->rollno = rollno;
    }
    student()
    {
    }
    student(int age)
    {
        this->age = age;
    }
    void display()
    {
        cout << this->age << " " << this->rollno << endl;
    }
};
int main()
{

    student s1(10, 20);
    student s2(20);
    student s3;
    s1.display();
    s2.display();
    return 0;
}