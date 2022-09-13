#include <stdio.h>
void swap(int arr[], int low, int high)
{
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}
int spliter(int array[], int low, int high)
{
    printf("Splitter\n");
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
    printf("Enter the number elements you want to sort : ");
    scanf("%d", &size);
    int array[size];
    printf("Enter Elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    quicksort(array, 0, size - 1);
    printf("Sorted List : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}