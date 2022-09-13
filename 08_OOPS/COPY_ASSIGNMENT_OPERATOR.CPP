#include<iostream>
using namespace std ;
#include "08_03_CLASS.cpp"
int main()
{
student s1(21,22);
student s2(45,45);
s2.display();
//Now to copy s1 in s2 we cant use copy constructor here we use copy assignment operator
s2=s1; //copy assignment operator
s2.display();
return 0;
}