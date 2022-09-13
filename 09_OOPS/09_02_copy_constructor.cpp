#include<iostream>
#include<string.h>
using namespace std ;
#include "CLASS_STUDENT.CPP"
int main()
{
    char name[]="Pratik";
    student s1(20,name);
    student s2(s1); //Copy constructor(Shallow copy)
    //student s2(s1) = it will pass s2.age = s1,age    and    s2.name = s1.name ( WHICH IS ADDRESS OF NAME VARIABLE)
    s1.name[4]='T';
    s1.display();
    s2.display();
    return 0;
}