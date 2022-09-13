#include <bits/stdc++.h>
using namespace std;
bool palindrome(int num)
{
    if (num % 10 == 0)
    {
        return false;
    }
    palindrome(num)
}
int main()
{
    int num;
    cin >> num;
    cout << palindrome(num);
    return 0;
}