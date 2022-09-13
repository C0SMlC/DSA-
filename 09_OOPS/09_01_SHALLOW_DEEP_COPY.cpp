#include<iostream>
#include<string.h>
using namespace std ;
#include "CLASS_STUDENT.CPP"
int main()
{

    char name[]="abcd";
    student s1(20,name);//Here when we pass name here only address of first element will be passed
    s1.display();
    name[3]='e';//we are changing the main name array
    student s2(25,name);//Here when we pass name here only address of first element will be passed THIS IS CALLED SHALLOW COPY
    s2.display();
    s1.display();
    //Arrays always passed as reference so changes we made will reflect into orignal variable also
    return 0;
}