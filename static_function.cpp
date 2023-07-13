#include<iostream>
using namespace std;

class test{
    public:
static int a;  //declare 

test()
{
    cout<<"test calling "<<endl;
}
static int member(){
    return a;
}
};

int test :: a=50; // intit\

int main(){
    cout<<"staring poinent:"<<test :: member()<<endl;

    test  t1,t2;
    cout<<"ending point:"<<test :: member()<<endl;
}