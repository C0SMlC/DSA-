#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b != 0)
    {
        return gcd(b, a % b);
    }
    else
        return a;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2);
    return 0;
}