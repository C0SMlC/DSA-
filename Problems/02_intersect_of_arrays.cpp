#include <iostream>
using namespace std;
void intersect(int array1[], int size1, int array2[], int size2)
{
    int array3[10] = {};
    for (int i = 0; i <= size1; i++)
    {
        for (int j = 0; j <= size2; j++)
        {
            if (array1[i] == array2[j])
            {
                array3[i] = array2[j];
            }
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << array3[i] << endl;
    }
}

int main()
{
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[4] = {1, 2, 4, 5};
    intersect(array1, 5, array2, 4);
    return 0;
}