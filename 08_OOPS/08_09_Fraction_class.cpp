class fraction
{
public:
int numerator;
int denominator;
public:
fraction()
{

};
fraction(int numerator, int denominator)
{
    this->numerator=numerator;
    this->denominator=denominator;
}
void display ()
{
    if (denominator != 1)
    {
      std::cout<<numerator<<" / "<<denominator<<endl;
    }
    else
    cout<<numerator<<endl;
}
void simplify()
{
   int gcd = 1;
   int j=min(this->numerator,this->denominator);
   for (int i = 1; i <= j; i++)
   {
       if (this->denominator % i == 0 && this->numerator % i == 0)
       {
           gcd = i;
       }
   }
    this->numerator=this->numerator/gcd;
    this->denominator=this->denominator/gcd;
}
void add(fraction const &f2)
{
     int den = denominator*f2.denominator;
     int num =(numerator*f2.denominator)+(f2.numerator*denominator);
     this->numerator=num;
     this->denominator=den;
     simplify();
}
void multiply(fraction f2)
{
this->numerator=this->numerator*f2.numerator;
this->denominator=this->denominator*f2.denominator;
simplify();
}
};