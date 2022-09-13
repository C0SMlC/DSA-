#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (j >= 0 and array[j] > current)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
}

int main()
{
    int count;
    cout << "Enter a number : " << endl;
    cin >> count;
    int array[count];
    cout << "Enter elements : " << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }
    insertion_sort(array, count);
    cout << "Sorted array is : ";
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
}