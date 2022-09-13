#include <stdio.h>
void Merge(int *array, int start, int mid, int end)
{
    //  START = 0 END = 10 ,MID = 5
    int num1 = mid - start + 1; // 5-0+1 = 6
    int num2 = end - mid;       // 10-5 = 5
    int array1[num1];
    int array2[num2];
    for (int i = 0; i < num1; i++)
    {
        array1[i] = array[start + i];
    }
    for (int i = 0; i < num2; i++)
    {
        array2[i] = array[mid + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (i < num1 && j < num2)
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
    printf("Enter the number elements you want to sort : ");
    scanf("%d", &size);
    int array[size];
    printf("Enter Elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    Mergesort(array, 0, size);
    printf("Sorted List : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}