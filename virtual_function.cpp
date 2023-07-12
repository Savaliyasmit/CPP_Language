//function overriding 

#include<iostream>
using namespace std;

class base{
         public:
         virtual void dis(){
            cout<<"base called ...."<<endl;
         }
};

class derived:public base{
       public:
       void dis(){
        cout<<"derived class caleed"<<endl;
       }
};

int main(){
    base *p,b;
    derived d;

    p=&b;       //base
    p->dis();

    p=&d;      //derived
    p->dis();
}