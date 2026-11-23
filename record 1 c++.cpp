#include<iostream>
using namespace std;
class Stu
{
    private:
    int rollno;
    string name;
    stu()
    {
        cout<<"constructor created";
    }
    stu(int r, string n)
    {
        rollno=r;
        name=n;
    }
    ~stu
    {
        cout<<"destructor destroyed";
    }
    void display()
    {
        cout<<"rollno:"<<rollno;
        cout<<"name:"<<name;
    }
};
int main()
{
    stu s;
    s.display(123,"raihana");
    return 0;
}