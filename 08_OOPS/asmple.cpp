#include <iostream>
using namespace std;

void swap(int *array1, int *array2)
{
    int temp = *array1;
    *array1 = *array2;
    *array2 = temp;
}
int main()
{
    int num, temp;
    cout << "Enter a number : ";
    cin >> num;
    int array[num];
    int num1 = num;
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < num; i++)
    {
        if (array[i] == 0)
        {
            for (int j = i + 1; j < num; j++)
            {
                if (array[j] != 0)
                {
                    swap(&array[i], &array[j]);
                }
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}