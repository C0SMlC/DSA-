// #include <iostream>
// using namespace std;
// void array(int *p)
// {
//     // cout << p << endl;
//     *p = (*p) + 1;
//     // cout << p << endl;
// }
// int main()
// {
//     int b = 10;
//     int *a = &b;
//     cout << *a << "\n";
//     array(a);
//     cout << *a;
//     return 0;
// }

#include <iostream>
using namespace std;
int sum1(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *(array + i);
    }
    return sum;
}
int main()
{
    int array[] = {12, 3, 1};
    cout << sum1(array, 3);
    return 0;
}