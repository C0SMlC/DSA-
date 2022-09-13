#include <bits/stdc++.h>
using namespace std;
class dynamicarray
{
public:
    int *data;
    int nextindex;
    int capacity;

public:
    dynamicarray()
    {
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }

    void add(int element)
    {
        if (nextindex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            capacity = 2 * capacity;
            data = newdata;
        }
        data[nextindex] = element;
        nextindex++;
    }

    int getelement(int index)
    {
        if (index == nextindex)
        {
            return -1;
        }
        else
            return data[index];
    }

    void addatindex(int newelement, int index)
    {
        if (index < nextindex)
        {
            data[index] = newelement;
        }
        if (index == nextindex)
        {
            add(newelement);
        }
        else
            return;
    }

    void display()
    {
        for (int i = 0; i < nextindex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    dynamicarray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(70);
    d1.add(80);
    d1.add(90);
    d1.add(100);
    d1.display();
    cout << d1.getelement(1) << endl;
    cout << d1.getelement(5) << endl;
    cout << d1.getelement(10) << endl;
    cout << d1.capacity << endl;
    cout << d1.nextindex << endl;
    d1.addatindex(110, 10);
    cout << d1.nextindex << endl;
    d1.display();
    cout << d1.capacity << endl;
    d1.addatindex(120, 11);
    cout << d1.nextindex << endl;
    d1.display();
    cout << d1.capacity << endl;
    return 0;
}