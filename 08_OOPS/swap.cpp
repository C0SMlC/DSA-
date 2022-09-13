#include <iostream>
using namespace std;
void swap(int *array1, int *array2)
{
    int temp = *array1;
    *array1 = *array2;
    *array2 = temp;
}
int main()
{

    int num1 = 10;
    int num2 = 20;
    swap(&num1, &num2);
    cout << num1 << " " << num2;
}