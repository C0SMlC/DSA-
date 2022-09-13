#include <iostream>
using namespace std;
int j = 10;
#define A 10
void increment()
{
    j++;
    cout << j << endl;
    // A = 20;
}
int main()
{

    cout << j << endl;
    increment();
    cout << j << endl;
    cout << A;
    return 0;
}