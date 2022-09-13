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
    int pivot = array[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (array[i] <= pivot)
        {
            i++;
        }
        while (array[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(array, i, j);
        }
    }
    swap(array, j, low);
    return j;
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