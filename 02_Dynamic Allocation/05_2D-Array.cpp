#include <iostream>
using namespace std;
int main()
{
    int row = 2;
    int column = 2;
    int **rows = new int *[row];
    for (int i = 0; i < row; i++)
    {
        rows[i] = new int[column];

        for (int j = 0; j < column; j++)
        {
            cin >> rows[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << rows[i][j] << endl;
        }
    }

    return 0;
}