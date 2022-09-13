#include <bits/stdc++.h>
using namespace std;
void findunique(int array[], int num)
{
    // for (int i = 0; i < num; i++)
    // {
    //     cout << *(array + i) << " ";
    // }
}
int main()
{
    int num;
    cin >> num;
    int *array = new int[num];
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    findunique(array, num);
    // for (int i = 0; i < num; i++)
    // {
    //     cout << *(array + i) << " ";
    // }
    return 0;
}