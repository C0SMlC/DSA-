#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "polynomial_class.cpp"
int main()
{
    polynomial p1;
    p1.add(2, 2);
    p1.add(1, 1);
    p1.add(10, 0);
    p1.display();
    return 0;
}