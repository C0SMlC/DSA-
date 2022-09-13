#include <iostream>
using namespace std;
#include "Fraction.cpp"
int main()
{
    Fraction f1(2, 4);
    Fraction f2(2, 4);
    f1.add(f2);
    f1.simplify();
    f1.display();
    Fraction f3(10, 4);
    Fraction f4(30, 4);
    f3.add(f4);
    f3.simplify();
    f3.display();
    return 0;
}