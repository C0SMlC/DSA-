#include <bits/stdc++.h>
using namespace std;
void fibonacii(int num)
{
    int static current = 1;
    int static previous = 1;
    int static ans = 0;
    if (ans < 2)
    {
        cout << 0 << " " << 1 << " " << 1 << " ";
    }

    if (num != 0)
    {
        ans = current + previous;
        cout << ans << " ";
        previous = current;
        current = ans;
        fibonacii(num - 1);
    }
    else
    {
        return;
    }
}
int main()
{
    int num = 15;
    fibonacii(num - 3);
    return 0;
}