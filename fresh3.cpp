#include<iostream>
using namespace std;
class worker
{
    protected:
    int age;
    char name[50],dept[50];
    public:
    void get()
    {
        cout<<"enter the age,name and departmen of the worker"<<endl;
        cin>>age>>name>>dept;
    }
    void show()
    {
        cout<<"The name of employee is:"<<name<<endl;
        cout<<"The age of employee is:"<<age<<endl;
        cout<<"The department of employee is:"<<dept<<endl;
    }
};
class manager:public worker{
    int days;
    public:
    void get()
    {
        cout<<"enter the age,name and departmen of the worker"<<endl;
        cin>>age>>name>>dept;
        cout<<"Enter the working days of worker"<<endl;
        cin>>days;

    }
    void show()
    {
        cout<<"The details of worker are name: "<<name<<" age is "<<age<<" Department is "<<dept<<endl;
        cout<<"Working days are:"<<days<<endl;
    }
};
int main()
{
    manager M;
    M.get();
    M.show();


 return 0;
}
