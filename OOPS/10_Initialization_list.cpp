#include <iostream>
using namespace std;
class student
{
    int age;
    int const rollnum; //  SINCE THIS IS CONSTANT WE CANT CHANGE ITS VALUE AFTERWORDS I.E after initialization
                       // this is why we use initialzation list which initilize constant varibles right at the time of constructor
    int &x;            // CONTAINS GARBAGE PATH

public:
    student(int age, int rollnum) : age(age), rollnum(rollnum), x(this->age)
    {
    }
    void display()
    {
        cout << age << " " << rollnum << " " << x << endl;
    }
};
int main()
{

    student s2(10, 20);
    s2.display();
    return 0;
}