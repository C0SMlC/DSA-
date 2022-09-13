#include <bits/stdc++.h>
using namespace std;
class polynomial
{
    int *degree;
    int capacity;

public:
    polynomial()
    {
        degree = new int[capacity];
        capacity = 5;
        for (int i = 0; i < capacity; i++)
        {
            degree[i] = 0;
        }
    }
    void create(int data, int ofdegree)
    {
        if (ofdegree > capacity)
        {
            int *newdegree = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newdegree[i] = degree[i];
            }
            delete[] degree;
            degree = newdegree;
            capacity *= 2;
        }
        degree[ofdegree] = data;
    }

    void display()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degree[i] != 0)
            {
                cout << "Data - " << degree[i] << " Degree - " << i << endl;
            }
        }
    }

    polynomial operator+(polynomial const &p)
    {
        int temo;
        polynomial temp;
        for (int i = 0; i < this->capacity; i++)
        {
            temo = (p.degree[i]) + (this->degree[i]);
            temp.create(temo, i);
        }
        return temp;
    }
};
int main()
{
    polynomial p1, p2, p3;
    p1.create(10, 3);
    p1.create(5, 2);
    p1.create(3, 1);
    p1.create(2, 0);
    p1.display();
    p1.create(10, 4);
    p2.create(5, 2);
    p2.create(3, 1);
    p2.create(2, 0);
    p2.display();
    p3 = p1 + p2;
    cout << " ////// " << endl;
    p3.display();
    return 0;
}