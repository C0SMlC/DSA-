#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter no rows and columns : " << endl;
    cin >> m, n;
    int **array = new int *[m];
    for (int i = 0; i < n; i++)
    {
        array[i] = new int[n];
        for (int j = 0; j < m; j++)
        {
            cout << "Enter element of position, " << i << " " << j;
            cin >> array[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
    }
    for (int i = 0; i < m; i++)
    {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}