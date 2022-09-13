#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int age;
    int *marks;

    student()
    {
    }
    student(int age, int *marks)
    {
        this->age = age;
        this->marks = new int[sizeof(marks)];
        this->marks = marks;
    }
    void display()
    {
        cout << age << " " << *marks << endl;
    }
};
int main()
{
    int marks[] = {1, 2, 3, 4};
    student s1, s2, s3;
    s1.age = 20;
    s2.age = 25;
    s1.marks = marks;
    marks[0] = j 10;
    s3.marks = marks;
    s3.age = 25;
    s1.display();
    s3.display();
    return 0;
}