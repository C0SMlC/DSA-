#include <bits/stdc++.h>
using namespace std;
class complexno
{
public:
    int real, imag;

public:
    complexno()
    {
    }
    complexno(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void add(const complexno &temp)
    {
        this->real = this->real + temp.real;
        this->imag = this->imag + temp.imag;
    }

    void display()
    {
        cout << this->real << " + " << this->imag << "j" << endl;
    }
};

int main()
{

    complexno num1(20, 10);
    complexno num2(10, 20);
    num1.add(num2);
    num1.display();
    return 0;
}