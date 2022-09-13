#include <iostream>
using namespace std;
int find(int number)
{
    int ans = 0;
    if (number < 0)
        return 0;
    else if (number == 1)
    {
        return 1;
    }
    else if (number == 0)
        return 1;
    else
    {
        ans = find(number - 1) + find(number - 2) + find(number - 3);
    }
}
int main()
{
    int number = 3;
    cout << find(number);
    return 0;
}