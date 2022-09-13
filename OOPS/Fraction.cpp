class Fraction
{
private:
    int num;
    int den;
    int s_num;
    int s_den;

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
    void display()
    {
        cout << num << "/" << den << endl;
    }
};