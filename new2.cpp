#include <iostream>
using namespace std;
// student ----->test
// student------>sports
// test------>result
// sports----->result
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print(void)
    {
        cout << "Your roll_no is " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, phy;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        phy = m2;
    }
    void print2()
    {

        cout << "Your maths marks is "
             << maths << endl
             << " and physics is "
             << phy << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float x)
    {
        score = x;
    }
    void print3(void)
    {
        cout << "Your sports score is "
             << score << endl;
    }
};
class result : public test, public sports
{
    float total;

public:
    void display(void)
    {

        total = maths + phy + score;
        print();
        print2();
        print3();
        cout << "Your total score is "
             << total << endl;
    }
};

int main()
{
    result shubham;
    shubham.set_number(1110);
    shubham.set_marks(99.9, 100.0);
    shubham.set_score(9.0);
    shubham.display();

    return 0;
}
