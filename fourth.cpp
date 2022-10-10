#include<iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    public:
    void setid()
    {
        cout<<"Enter the id:-";
        cin>>id;
    }
    void getid()
    {
        cout<<"The id of this employee is "<<id<<endl;
    }
};


int main()
{
    employee E[4];
    for(int i=0;i<4;i++)
    {
        E[i].setid();
        E[i].getid();
    }
    
 return 0;
}
