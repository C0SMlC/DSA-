class queue
{
private:
    T *data;
    int nextindex;
    int firstindex;
    int size;
    int capacity;

public:
    void print()
    {
        for (int i = firstindex; i < size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    queue(int s)
    {
        data = new T(s);
        nextindex = 0;
        firstindex = -1;
        size = 0;
        capacity = s;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void enq(T element)
    {
        if (size == capacity)
        {
            cout << " The Queue Is Full " << endl;
        }

        data[nextindex] = element;
        nextindex = (nextindex + 1) % capacity;
        if (firstindex == -1)
        {
            firstindex = 0;
        }
        size++;
    }

    void deq()
    {
        if (isEmpty())
        {
            cout << " The queue is empty " << endl;
        }
        cout << data[firstindex] << " is popped " << endl;
        firstindex = (firstindex + 1) % capacity;
        size--;
    }

    void getfirst()
    {
        cout << data[firstindex] << endl;
    }

    void getsize()
    {
        cout << size << endl;
    }
};
