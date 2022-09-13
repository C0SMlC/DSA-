#include <iostream>
using namespace std;
class complexNum
{
    int real;
    int imaginary;

public:
    complexNum()
    {
    }
    complexNum(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    complexNum add(complexNum new1)
    {
        int newreal = this->real + new1.real;
        int newimaginary = this->imaginary + new1.imaginary;
        complexNum new2(newreal, newimaginary);
        return complexNum(newreal, newimaginary);
    }
    complexNum operator+(complexNum new1)
    {
        int newreal = this->real + new1.real;
        int newimaginary = this->imaginary + new1.imaginary;
        complexNum new2(newreal, newimaginary);
        return complexNum(newreal, newimaginary);
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
        cout << "Real part is : " << real << endl;
        cout << "Imaginary part is : " << imaginary << endl;
    }
};
int main()
{
    complexNum new1(10, 20);
    complexNum new2(20, 30);
    complexNum new3 = new1 + new2;
    new3.display();
    return 0;
}