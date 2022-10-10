#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {

        cout << "How are u" << endl;
    }
};
class base2
{
public:
    void greet()
    {

        cout << "kaise ho!!" << endl;
    }
};
class derive : public base1, public base2
{
    int a;

public:
    void greet()
    {

        base1::greet();
    }
};
class B
{
    public:
    void say()
    {
        cout<<"Hello world"<<endl;
    }
};
class D:public B
{
    int a;
    //D's new method will overide base class's say() function.
    public:
    void say()
    {
        cout<<"Hello my people!!"<<endl;
    }
};
int main()
{
    /*Ambiguity 1
    base1 base1obj;
    base2 base2obj;

    base1obj.greet();
    base2obj.greet();

    derive d;
    d.greet();
*/
B b;
b.say();

D d;
d.say();



    return 0;
}
