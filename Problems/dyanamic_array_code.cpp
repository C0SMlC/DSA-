#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "dynamic_array.cpp"
int main()
{
    array a1;
    for (int i = 1; i <= 30; i++)
    {
        a1.add(i);
    }

    print(a1);
    // a1.insertatindex(8, 100);
    // print(a1);
    // array a3;
    // array a2(a1);
    // a2.insertatindex(9, 100);
    // print(a2);
    // a3 = a1;
    // a3.insertatindex(9, 100);
    // print(a3);
    // print(a1);
    return 0;
}