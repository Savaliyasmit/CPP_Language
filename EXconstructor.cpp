#include<iostream>
using namespace std;

class Test
{

    public:
   Test()
   {
    cout<<"Defualt Constructor type call.... "<<endl;
   }

   Test(int a) // using int dataType 
   {
    cout<<"Perameterized Constructor type call.. A : "<<a<<endl;
   }

   Test(char ch) // using char dataType 
   {
    cout<<"Perameterized Constructor type call.. ch : "<<ch<<endl;
   }
 
};

int main()
{
    Test t,b(23),c('J');
}
