//  THE VAKUE WHICH NEED NOT TO CHANGE AS PER OBJECTS

#include <iostream>
using namespace std;
class student
{
    int RollNo;

public:
    static int totalRNo; // INITIALISATION
    student()
    {
        totalRNo++;
    }
};
int student ::totalRNo = 0; //  DECLARATION
int main()
{
    student s1, s2, s3, s4;
    cout << student::totalRNo;
    return 0;
}