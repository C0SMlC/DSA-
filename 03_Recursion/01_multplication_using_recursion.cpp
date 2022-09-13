#include <iostream>
using namespace std;
int multiply(int a = 1, int b = 1)

{
    int ans = 0;
    if (b > 0)
        ans = a + (b - 1) + multiply(--a, --b);
    return ans;
}
int main()
{
    cout << multiply(200, 0);
    return 0;
}