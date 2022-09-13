#include <iostream>
using namespace std;
int rec(int n)
{
    int ans = 1;
    if (n == 0)
        return 1;
    else if (n < 0)
        return 0;
    if (n > 1)
    {
        ans = rec(n - 3) + rec(n - 2) + rec(n - 1);
        return ans;
    }
}
int main()
{
    cout << rec(4);
    return 0;
}