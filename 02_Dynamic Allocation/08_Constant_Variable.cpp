#include <iostream>
using namespace std;
int main()
{
    int variable = 10;
    int nnum = 10;
    int num = 20;
    int const *a = &num;
    num++;
    // (*a)++;
    cout << *a << endl;
    cout << num << endl;
    const int *v = a;
    v = &nnum;

    //  CONSTANT POINTER

    int *const var = &variable;
    var = &nnum;

    return 0;
}