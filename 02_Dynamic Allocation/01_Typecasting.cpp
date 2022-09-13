#include <iostream>
using namespace std;
int main()
{
    int a = 65;
    int *b = &a;
    char *c = (char *)b;
    cout << a << " " << *b << " " << *c << endl;
    return 0;
}