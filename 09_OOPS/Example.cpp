#include<iostream>
#include<string.h>
using namespace std ;
#include "CLASS_STUDENT.cpp"
/*class student
{
   char *name;
   int rollnum;
   public:
   student()
   {

   }
   student(int rollnum,char name[] )
   {
        this->rollnum=rollnum;
        this->name=new char[(strlen(name))+1];
        strcpy(this->name,name);
   }
   void display()
   {
     cout<<this->name<<"  "<<this->rollnum<<endl;
   }
};*/
int main()
{
char name[]="Pratik";
student s1(20,name);
s1.display();
name[0]='r';
s1.display();
student s2(30,name);
s2.display();
return 0;
}