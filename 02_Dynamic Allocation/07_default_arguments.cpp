#include <iostream>
using namespace std;
int maximum(int a = 0, int b = 0)
{
    return a > b ? a : b;
}
int main()
{
    cout << maximum(10, 20) << endl;
    cout << maximum(10) << endl;
    cout << maximum(10) << endl;
    return 0;
}