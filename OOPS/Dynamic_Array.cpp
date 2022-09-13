class dynamic_array
{

    int *data;
    int capacity;
    int nextindex;

public:
    dynamic_array()
    {
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }

    dynamic_array(dynamic_array const &D1)
    {
        this->data = new int[D1.capacity];
        for (int i = 0; i < D1.nextindex; i++)
        {
            this->data[i] = D1.data[i];
        }
        this->nextindex = D1.nextindex;
        this->capacity = D1.capacity;
    }

    void operator=(dynamic_array const &D1)
    {
        this->data = new int[D1.capacity];
        for (int i = 0; i < D1.nextindex; i++)
        {
            this->data[i] = D1.data[i];
        }
        this->nextindex = D1.nextindex;
        this->capacity = D1.capacity;
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
            data = newdata;
            capacity = capacity * 2;
        }
        data[nextindex] = element;
        nextindex++;
    }
    void insert_index(int element, int index)
    {
        if (index < nextindex)
        {
            data[index] = element;
        }
        else if (index == nextindex)
        {
            add(element);
        }
        else
            cout << "Cant add at " << index << endl;
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