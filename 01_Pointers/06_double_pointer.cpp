#include <iostream>
using namespace std;
void increment(int *p)
{
    p = p + 1;
}
void increment2(int *p)
{
    *p = *p + 1;
}
void increment3(int **p)
{
    **p = **p + 1;
}
void increment4(int **p)
{
    *p = *p + 1;
}
int main()
{
    int p = 10;
    int *a = &p;
    int **b = &a;
    increment(a);
    cout << p << endl;
    increment2(a);
    cout << p << endl;
    increment3(b);
    cout << p << endl;
    increment4(b);
    cout << p << endl;

    // cout << p << " " << *a << " "
    //      << " " << **b;
    return 0;
}