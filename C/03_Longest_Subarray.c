int splitter(int array[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[low];
    while (i < j)
    {
        while (array[i] <= pivot)
        {
            i++;
        }
        while (j > pivot)
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