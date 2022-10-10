#include<iostream>
using namespace std;

    class tenth
    {
        int phy,che;
        public:
        void get1(int a,int b)
        {
            phy=a;
            che=b;
        }
        void show1()
        {
            cout<<"Hi"<<endl;
            cout<<phy<<" "<<che<<endl;
        }
    };
    class student: tenth{
        int math,bio;

        public:
        void get2(int x,int y)
        {
            get1(100,90);
            math=x;
            bio=y;
        }
        void show2()
        {
            show1();
            cout<<"It's Fine"<<endl;
            cout<<math<<" "<<bio<<endl;        }

    };
int main()
{
    tenth T1;
    student T2;
    
    
    T2.get2(88,99);
    T2.show2();

 return 0;
}
