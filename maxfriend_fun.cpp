#include<iostream>
using namespace std;

class test
{   
     int a,b;

     public:
     void input()
     {
         cout<<"entre value a:-";
         cin>>a;

         cout<<"entre value b:-";
         cin>>b;
     }
    friend void  find(test t);

     
};

void find(test t)
{
    if(t.a>t.b)
    {
        cout<<"this is max value:-"<<t.a<<endl;
    }
    else
    {
        cout<<"this is max value-"<<t.b<<endl;
    }

}


int main()
{
  test y;
  y.input();
  find(y);
}