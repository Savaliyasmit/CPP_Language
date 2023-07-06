#include<iostream>
using namespace std;

class box
{
   int l,w,h;
   friend box add(box , box);
   public:
   void setdata(int a ,int b, int c)
   {
    l=a;
    w=b;
    h=c;
   }
   int getdata()
   {
    return l*w*h;
   }

  friend box operator++ (box m)//object as argument 
{
    box t;
    t.w =  ++m.w;
    t.h = ++m.h ;
    t.l = ++m.l;

    return t; //object as return 
}


};


int main(){

    box a,b,c;
    a.setdata(2,2,2);
  cout<<"volume of box A is:"<<a.getdata()<<endl;

  b.setdata(3,3,3);
  cout<<"volume of box b is:"<<b.getdata()<<endl;

  c= ++a;
  cout<<"volume of c is:"<<c.getdata()<<endl; //print sum values
  }
