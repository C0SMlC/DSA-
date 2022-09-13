#include <bits/stdc++.h>
using namespace std;
void Search(int array[], int start, int end, int element)
{
}
int main()
{
    int num;
    cout << "Enter size : " << endl;
    cin >> num;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    Search(array, 2, num);
    return 0;
}