#include <iostream>
using namespace std;

class student
{
public:
  int rollNumber;
  int marks;

public:
  student(int rollNumber, int marks)
  {
    this->rollNumber = rollNumber;
    this->marks = marks;
  }
  student()
  {
  }
  student(string name)
  {
    if (name == "Pratik")
    {
      int rollnum, mark;
      cout << "Enter Roll Number and Marks : ";
      cin >> rollnum >> mark;
      student s1(rollnum, mark);
    }
    else if (name == "Tanishk")
    {
      cout << name << " is idiot" << endl;
    }
  }
  void display()
  {
    cout << rollNumber << " " << marks << endl;
  }
};