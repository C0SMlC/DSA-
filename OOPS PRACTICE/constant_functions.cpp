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
    void display() const
    {
        cout << this->age << " " << this->rollno << endl;
    }
};
int main()
{
    student const s1(20, 20);
    s1.display();
    return 0;
}