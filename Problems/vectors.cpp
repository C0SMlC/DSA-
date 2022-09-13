#include <iostream>
#include <string.h>
#include <conio.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> name;
    name.push_back(10);
    name.pop_back();
    for (int i = 0; i < name.size(); i++)
    {
        cout << " Enter : " << endl;
        cin >> name[i];
    }
    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i] << " ";
    }

    return 0;
}