#include <bits/stdc++.h>
using namespace std;
void pass()
{
    ;
}
int main()
{
    int a, b;
    int r, div, rem;
    cin >> a >> b;
    (a < b) ? swap(a, b) : pass();
    while (b != 0)
    {
        r = a % b;
        div = a / b;
        a = b;
        b = r;
    }
    cout << "The GCD is : " << a << endl;
    return 0;
}