#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        int j = i;
        array[i] = ++j;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
    cout << array << endl;
    delete[] array;
    cout << array << endl;
    return 0;
}