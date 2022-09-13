#include <iostream>
using namespace std;
int main()
{
    int row = 2;
    int column = 1;
    int **p = new int *[row];
    for (int i = 0; i < column; i++)
    {
        p[i] = new int[column];
        for (int j = 0; j < row; j++)
        {
            cin >> p[j][i];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << p[i][j] << endl;
        }
    }

    cout << "end" << endl;
    cout << p[1][0];
    return 0;
}