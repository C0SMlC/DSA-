class Stack
{

    int capacity;
    int *array;
    int nextindex;

public:
    Stack(int size)
    {
        array = new int[size];
        nextindex = 0;
        capacity = size;
    }

    void print()
    {
        for (int i = 0; i < this->capacity; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty()
    {
        return nextindex == 0;
    }

    void push(int element)
    {
        if (nextindex == capacity)
        {
            cout << "Stack is full" << endl;
            return;
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

    void TopElement()
    {
        cout << array[nextindex - 1] << endl;
        return;
    }
};