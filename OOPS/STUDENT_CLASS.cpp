
class student
{
public:
    int age;
    int rollnum;

public:
    //  DEFAULT CONSTRUVTOR
    student()
    {
        cout << "Called" << endl;
    }
    student(int age, int rollnum)
    {
        (*this).age = age;
        (*this).rollnum = rollnum;
    }
    ~student()
    {
        cout << "Destructor called" << endl;
    }
    void get()
    {
    }
    void set()
    {
        age = 16;
        rollnum = 20;
    }
    void display()
    {
        cout << age << " " << rollnum << endl;
    }
};