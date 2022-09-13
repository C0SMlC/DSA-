#include <bits/stdc++.h>
using namespace std;
class integer
{
public:
    int value;
    integer()
    {
    }
    integer(int number)
    {
        this->value = number;
    }
    void operator=(int number)
    {

        this->value = number;
        return;
    }
    integer operator+(integer const &number)
    {
        integer newint;
        newint.value = this->value + number.value;
        return newint;
    }

    bool operator==(integer newint)
    {
        return (this->value == newint.value);
    }
    void display()
    {
        cout << value << endl;
    }

    integer &operator++()
    {
        // integer newone;
        this->value = this->value + 1;
        return *this;
    }
};
int main()
{
    integer num1 = 10;
    integer num2 = 25;
    integer num3 = 39;
    num1.display();
    num2.display();
    num3.display();
    integer num4 = num1 + num2;
    num4.display();
    integer num5 = ++num1;
    num5.display();
    ++(++num3);
    num3.display();
    return 0;
}