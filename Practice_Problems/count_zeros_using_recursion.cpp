#include <iostream>
using namespace std;
int countzero(int n)
{
    // int rem = 0;
    static int ans = 0;
    if (n > 0)
    {
        if (n % 10 == 0)
        {
            ans += 1;
        }
        countzero(n / 10);
    }
    return ans;
}
int main()
{
    cout << countzero(00001);
    return 0;
}