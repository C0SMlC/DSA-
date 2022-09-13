#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#include "Dynamic_Array.cpp"

int main()
{
    dynamic_array D1;
    D1.add(1);
    D1.add(3);
    D1.add(2);
    D1.display();
    dynamic_array D2(D1);
    D2.insert_index(3, 0);
    D2.display();
    D1.display();
    dynamic_array D3, D4;
    D3 = D1;
    D1.insert_index(3, 0);
    D1.display();
    D3.display();
    return 0;
}