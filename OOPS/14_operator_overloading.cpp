#include <iostream>
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
    Fraction add(Fraction f3)
    {
        int newnum = (this->num * f3.den) + (this->den * f3.num);
        // cout << num << endl;
        int newden = this->den * f3.den;
        //  cout << den << endl;

        Fraction newfraction(newnum, newden);
        newfraction.simplify();
        return newfraction;
    }
    Fraction operator+(Fraction f3)
    {
        int newnum = (this->num * f3.den) + (this->den * f3.num);
        // cout << num << endl;
        int newden = this->den * f3.den;
        //  cout << den << endl;

        Fraction newfraction(newnum, newden);
        newfraction.simplify();
        return newfraction;
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
    void display()
    {
        cout << num << "/" << den << endl;
    }
};
int main()
{
    Fraction f1(10, 20);
    Fraction f2(10, 10);
    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    f4.display();
    f3.display();
}