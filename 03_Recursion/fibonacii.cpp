#include <bits/stdc++.h>
using namespace std;
void fibonacii(int num)
{
    int current = 1;
    int previous = 0;
    int static ans = 0;
    for (int i = 0; i < num; i++)
    {
        if (i <= 1)
        {
            cout << i << " ";
        }
        else
        {
            ans = current + previous;
            previous = current;
            current = ans;
            cout << ans << " ";
        }
    }
}
int main()
{
    int num = 5;
    fibonacii(num);
    return 0;
}