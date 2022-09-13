#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter Two Numbers : " << endl;
    cin >> n >> m;
    for (int i = 1; i < m - 1; i++)
    {
        n = n + n;
    }
    cout << n;
    return 0;
}