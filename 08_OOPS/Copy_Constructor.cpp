#include<iostream>
using namespace std ;
#include "08_03_CLASS.cpp"
int main()
{
student s1(22,46);
student s2(s1); //COPY CONSTRUCTOR
s2.display();
cout<<"\n";
student (*s3)=new student(22,21);
student (*s4)=new student(*s3);
s4->display();
student s5;
s5.rollNumber=52;
s5.marks=45;
student s6(s5);
cout<<"\n";
s6.display();
return 0;
}