#include <bits/stdc++.h>
using namespace std;
void fibonacci(int num)
{
    int current = 1;
    int sum;
    int previous = 0;
    for (int i = 0; i < num; i++)
    {
        if (i <= 1)
        {
            sum = i;
        }
        else
        {
            sum = previous + current;
            previous = current;
            current = sum;
        }
        cout << sum << " ";
    }
}
int main()
{
    int num = 15;
    fibonacci(num);
    return 0;
}