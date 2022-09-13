#include <bits/stdc++.h>
using namespace std;
class fraction
{
public:
    int num;
    int denom;
    fraction()
    {
    }
    fraction(int num, int denom)
    {
        this->num = num;
        this->denom = denom;
    }

    fraction add(fraction const &f)
    {
        int newnum = ((this->num) * (f.denom)) + (f.num * this->denom);
        int newden = (this->denom * f.denom);
        fraction fnew(newnum, newden);
        return fnew;
    }

    fraction operator+(fraction const &f)
    {
        int newnum = ((this->num) * (f.denom)) + (f.num * this->denom);
        int newden = (this->denom * f.denom);
        fraction fnew(newnum, newden);
        return fnew;
    }

    void display()
    {
        cout << this->num << " " << this->denom << endl;
    }
};
int main()
{
    fraction f1(10, 20);
    fraction f2(20, 30);
    fraction f3 = f1.add(f2);
    f3.display();
    fraction f4 = f1 + f2;
    f4.display();
    return 0;
}