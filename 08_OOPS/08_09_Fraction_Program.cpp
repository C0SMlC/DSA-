#include<iostream>
using namespace std;
 #include "08_09_Fraction_class.cpp"
int main()
{
fraction f1,f2;
cin>>f1.numerator>>f1.denominator;
cin>>f2.numerator>>f2.denominator;
//f1.display();
//f2.display();
f1.add(f2);
//f1.display();
//f2.display();
//f1.multiply(f2);
f1.display();
return 0;
}