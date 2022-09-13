class queue
{
    int *array;
    int nextindex;
    int firstindex;
    int capacity;
    int size;

public:
    queue()
    {
        size = 0;
        array = new int[5];
        nextindex = 0;
        capacity = 5;
        firstindex = 0;
    }

    bool isEmpty()
    {
        return size == 0;
    }
    void print()
    {
        for (int i = 0; i < nextindex; i++)
        {
            cout << array[i] << " ";
        }
    }

    void push(int element)
    {
        if (size == capacity)
        {
            int *newdata = new int[capacity * 2];
            int j = 0;
            for (int i = firstindex; i < capacity; i++)
            {
                newdata[j] = array[i];
                j++;
            }

            for (int i = 0; i < firstindex; i++)
            {
                newdata[j] = array[i];
                j++;
            }
            firstindex = 0;
            delete[] array;
            nextindex = capacity;
            array = newdata;
            capacity *= 2;
        }
        array[nextindex] = element;
        nextindex = (nextindex + 1) % capacity;
        if (firstindex == -1)
        {
            firstindex = 0;
        }
        size++;
    }
    void getfirst()
    {
        cout << array[firstindex] << endl;
    }

    void getsize()
    {
        cout << size << endl;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "\nQueue is Empty";
            return;
        }
        else
        {
            size--;
            cout << array[firstindex] << " is popped" << endl;
            firstindex = (firstindex + 1) % capacity;
        }
    }
};