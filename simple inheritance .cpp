#include <iostream>
using namespace std;
class college
{
public:
    string collegeName = "MVGR";
    int collegeCode = 33;
};

class student : public college
{
public:
    string name = "praneeth";
    int roll = 517;
};

int main()
{
    student obj;
    cout << "Student name : "<<obj.name << endl;
    cout << "Student roll num: "<<obj.roll << endl;
    cout << "College name: "<<obj.collegeName << endl;
