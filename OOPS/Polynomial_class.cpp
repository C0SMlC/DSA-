class polynomial
{

    int *data;
    int capacity;

public:
    polynomial()
    {
        data = new int[5];
        capacity = 5;
        for (int i = 0; i < capacity; i++)
        {
            data[i] = 0;
        }
    }
    void add(int element, int degree)
    {
        if (degree >= capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity = capacity * 2;
        }
        data[degree] = element;
    }
    void display()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (data[i] != 0)
            {
                cout << data[i] << "x"
                     << "^" << i << " ";
            }
        }
    }
};
