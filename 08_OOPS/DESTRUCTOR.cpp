/*
DESTRUCTOR
Same name as class
No return type
No input

DESTRUCTOR -->

~student()
{ 

}
*/
#include<iostream>
using namespace std ;
#include "08_03_CLASS.cpp"
int main()
{
student s1;
student s2;
/*OUTPUT -->
Destructor called 
Destructor called
Destructor will be called 2 times because of 2 objects s1 and s2
*/
student (*s3)=new student ; //For this we have to call destructor manually
delete s3; // Now condtructor will be called for third time
return 0;
}
/*
OUTPUT -->
Destructor called 
Destructor called
Destructor will be called 2 times because of 2 objects s1 and s2
*/ 