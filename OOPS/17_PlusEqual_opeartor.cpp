#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class Fraction
{
private:
    int num;
    int den;

public:
    Fraction()
    {
    }
    Fraction(int num, int den)
    {
        this->num = num;
        this->den = den;
    }
    void add(Fraction f3)
    {
        this->num = (this->num * f3.den) + (this->den * f3.num);
        // cout << num << endl;
        this->den = this->den * f3.den;
        //  cout << den << endl;
    }
    void simplify()
    {
        int counter = (num > den) ? num : den;
        for (int i = counter; i > 1; i--)
        {
            if (num % i == 0 and den % i == 0)
            {
                num = num / i;
                den = den / i;
            }
        }
    }
    // WE MUST RETURN ADDRESS AS COMPILER WILL CREATE BUFFER MEMORY WHICH IS NOT GOOD FOR FURTHER OPERATION WITHOUT STORING IT IN VARIABLE
    Fraction operator+=(Fraction const &f3)
    {
        this->num = (this->num * f3.den) + (this->den * f3.num);
        // cout << num << endl;
        this->den = this->den * f3.den;
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }
};
int main()
{
    Fraction F1(2, 1);
    Fraction F2(3, 1);
    F2 += F1;
    F2.display();
}