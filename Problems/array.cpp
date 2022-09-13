#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int array(int *array)
{
    for (int i = 0; i <= sizeof(array); i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    array(array1);
    return 0;
}