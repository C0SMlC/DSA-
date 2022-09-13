
class student
{
public:
    int age;
    int const name;
    int &x; // pointer to age
    // we cant assign a new value now because above two variables already holds a garbage value
    // thats why we use INTIALISATION LIST
    // FOR THAT CREATION CONSTRUCTION IS COMPULSORY
    student(int age, int name) : age(age), name(name), x(this->age) // it will evaluate to int const age=age
    // no need to write this operator
    {
    }
    void display()
    {
        cout << age << " " << name << endl;
    }
};