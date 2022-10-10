#include <iostream>
using namespace std;
class base1
{
    int a, b, c;

public:
    void sum(int x, int y)

    {
        a = x;
        b = y;
    }
    void print1()
    {
        c = a + b;
        cout << "Value of c is " << c << endl;
    }
};

class base2
{
    int A, B, C;

public:
    void sub(int X, int Y)
    {
        A = X;
        B = Y;
    }
    void print2()
    {
        C = A - B;
        cout << "Value of C is " << C << endl;
    }
};
class derive : public base1, public base2
{
    int Q, W, E;

public:
    void mul(int q, int w)
    {
        Q = q;
        W = w;
    }

    void print3()
    {
        E = Q * W;
        cout << "Value of E is " << E << endl;
    }

};
int main()
{
    base1 ob;
    ob.sum(1,2);
    ob.print1();
    
    base2 ob1;
    ob1.sub(3,1);
    ob1.print2();


      derive ob2;
      ob2.mul(5,5);
      ob2.print3();

      ob2.sum(4,4);
      ob2.print1();

      ob2.sub(3,3);
      ob2.print2();

    


    
    return 0;
}
