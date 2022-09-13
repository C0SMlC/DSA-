#include <bits/stdc++.h>
using namespace std;
int numstairs(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return 0;
    }
    else
        return numstairs(num - 3) + numstairs(num - 2);
}
int main()
{
    int num;
    cout << "Enter number of stairs : " << endl;
    cin >> num;
    cout << numstairs(num);
    return 0;
}