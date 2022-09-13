class Stack
{

    int capacity;
    char *array;
    int nextindex;

public:
    Stack()
    {
        array = new char[5];
        nextindex = 0;
        capacity = 5;
    }

    void print()
    {
        for (int i = 0; i < this->nextindex; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty()
    {
        return nextindex == 0;
    }

    void push(char element)
    {
        if (capacity == nextindex)
        {
            char *data = new char[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                data[i] = array[i];
            }
            capacity *= 2;
            delete[] array;
            array = data;
        }
        array[nextindex] = element;
        nextindex++;
    }

    void pop()
    {
        if (nextindex == 0)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << array[nextindex - 1] << " is popped " << endl;
        --nextindex;
    }

    char TopElement()
    {
        // cout << array[nextindex - 1] << endl;
        return array[nextindex - 1];
    }
};