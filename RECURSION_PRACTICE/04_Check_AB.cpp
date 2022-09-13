#include <bits/stdc++.h>
using namespace std;
void check(string str, int start, int len)
{
    int i = start;
    int starhut = 0;
    int length = len;
    if (str[starhut] != 'a')
    {
        cout << "VOILATED";
        return;
    }

    if (i < length)
    {
        if (str[i] == 'a')
        {
            if (str[i + 1] == '\0' or str[i + 1] == 'a' or (str[i + 1] == 'b' and str[i + 2] == 'b'))
            {
                check(str, i + 1, length);
            }
            cout << "TRUE";
        }
    }
    else
    {
        return;
    }
}
int main()
{
    string name;
    cin >> name;
    // cout << name.length();
    check(name, 0, name.length());
    return 0;
}