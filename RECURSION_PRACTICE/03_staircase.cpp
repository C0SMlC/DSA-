#include <bits/stdc++.h>
using namespace std;
int solve(int i)
{
    if (i == 0)
    {
        return 1;
    }
    else if (i < 0)
    {
        return 0;
    }
    return solve(i - 1) + solve(i - 2) + solve(i - 3);
}
int main()
{
    int i;
    cout << "Enter number of stairs : " << endl;
    cin >> i;
    cout << solve(i);
    return 0;
}