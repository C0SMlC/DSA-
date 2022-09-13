#include<iostream>
using namespace std;
#include "08_03_CLASS.cpp"
int main()
{
int num,rollnum,index;
string name;
cin>>name;
student s1(name);
s1.display();
return 0;
}