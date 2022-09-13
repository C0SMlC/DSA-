#include <iostream>
using namespace std;
int checkPalindrime(int n)
{
    int static ans = 0;
    if (n > 0)
    {

        ans += (n % 10);
        checkPalindrime(n / 10);
    }
    return ans;
}

int main()
{
    cout << checkPalindrime(112211);
    return 0;
}