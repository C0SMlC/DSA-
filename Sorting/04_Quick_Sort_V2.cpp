#include <bits/stdc++.h>
using namespace std;
void swap(int arr[], int low, int high)
{
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}
int spliter(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i + 1, high);
    return i + 1;
}
void quicksort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = spliter(array, low, high);
        quicksort(array, pivot + 1, high);
        quicksort(array, low, pivot - 1);
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
    quicksort(array, 0, size);
    cout << "Sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}