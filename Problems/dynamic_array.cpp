class array
{
public:
    int *data;
    int capacity;
    int nextindex;

    array()
    {
        data = new int[5];
        capacity = 5;
        nextindex = 0;
    }
    array(array const &a2)
    {
        this->data = new int[a2.capacity];
        for (int i = 0; i < a2.capacity; i++)
        {
            this->data[i] = a2.data[i];
        }

        this->nextindex = a2.nextindex;
        this->capacity = a2.capacity;
    }
    array operator=(array const &a2)
    {
        this->data = new int[a2.capacity];
        for (int i = 0; i < a2.capacity; i++)
        {
            this->data[i] = a2.data[i];
        }

        this->nextindex = a2.nextindex;
        this->capacity = a2.capacity;
    }
    void insertatindex(int index, int element)
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
        {
            return;
        }
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
            capacity *= 2;
        }

        data[nextindex] = element;
        nextindex++;
    }
};
void print(array a2)
{
    for (int i = 0; i < a2.nextindex; i++)
    {
        cout << a2.data[i] << " ";
    }
    cout << endl;
}
