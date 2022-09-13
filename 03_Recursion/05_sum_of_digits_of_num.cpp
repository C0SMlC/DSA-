#include <bits/stdc++.h>
using namespace std;
int countsum(int num)
{
    int static ans = 0;
    if (num > 0)
    {
        ans = ans + (num % 10);
        countsum(num / 10);
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;
    cout << countsum(num);
    return 0;
}