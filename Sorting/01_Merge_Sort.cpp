#include <bits/stdc++.h>
using namespace std;
void Merge(int *array, int start, int mid, int end)
{
    int num1 = mid - start + 1;
    int num2 = end - mid;
    int array1[num1];
    int array2[num2];
    for (int i = 0; i < num1; i++)
    {
        array1[i] = array[start + i];
    }
    for (int i = 0; i < num2; i++)
    {
        array2[i] = array[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (i < num1 and j < num2)
    {
        if (array1[i] < array2[j])
        {
            array[k] = array1[i];
            k++;
            i++;
        }
        else
        {
            array[k] = array2[j];
            j++;
            k++;
        }
    }
    while (i < num1)
    {
        array[k] = array1[i];
        k++;
        i++;
    }

    while (j < num2)
    {
        array[k] = array2[j];
        k++;
        j++;
    }
}
void Mergesort(int *array, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        Mergesort(array, start, mid);
        Mergesort(array, mid + 1, end);
        Merge(array, start, mid, end);
    }
}
int main()
{
    int size;
    cout << "Enter size of array : " << endl;
    cin >> size;
    int array[size];
    cout << "Enter Elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    Mergesort(array, 0, size);
    cout << "Sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}