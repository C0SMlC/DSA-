#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
void sum(int num)
{
    int ite = 0;
    if (num == 0)
    {
        return;
    }
    sum(num - 1);
    cout << ite + 1 << "\n";
    cout << num << " ";
}
int main()
{
    sum(5);
    return 0;
}