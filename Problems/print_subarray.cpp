#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void subarray(int array[], int size)
{
    int count = pow(2, size);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i & (1 << j)) != 0)
                cout << array[j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int num;
    cout << "Enter the size of array : ";
    cin >> num;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    subarray(array, num);
    return 0;
}