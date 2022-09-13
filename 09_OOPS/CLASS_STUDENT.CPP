class student
{
public:

int age;
char *name;
student()
{

}
student (student const  & s1)
{
    this->age  = s1.age;
    this->name = new char[strlen(s1.name) + 1];
    this -> name = s1.name;
}
student(int age, char* name)
{
    this->age=age;
    //this->name=name; //shallow copy AVOIDED
    this->name=new char[strlen(name)+1]; //Deep copy
    strcpy(this->name, name);
}
void display()
{
    cout<<age<<" "<<name<<endl;
}

};