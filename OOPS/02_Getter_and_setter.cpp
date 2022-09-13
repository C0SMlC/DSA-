#include <iostream>
using namespace std;
class student
{
private:
    int age;
    int rollnum;

public:
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
    s1.set();
    s1.display();
}