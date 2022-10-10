#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;//By default value is 0

public:
    void setdata()
    {
        cout << "Enter the emlpoyee id";
        cin >> id;
        count++;
    }
    void display()
    {
        cout << "Emloyee id is " << id << " and Emlpoyee no. is " << count << endl;
    }
    static void fun()
    {
      cout<<"The value of count is "<<count<<endl;
    }
};
int employee::count;
int main()
{
    employee mahesh, suresh, rohan;
    mahesh.setdata();
    mahesh.display();
    mahesh.fun();

    suresh.setdata();
    suresh.display();
    suresh.fun();

    rohan.setdata();
    rohan.display();
    rohan.fun();
    return 0;
}
