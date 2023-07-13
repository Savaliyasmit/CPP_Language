#include<iostream>
using namespace std;

class test{
    public:
    static int a; // declare
    test()
    {
        cout<<"test calling..."<<endl;
        ++a;
    }
};

int test::a=50; // init

int main()
{
    cout<<"straing point :"<<test :: a <<endl;

    test t1,t2;

    cout<<"ending point :"<<test :: a <<endl; 
}