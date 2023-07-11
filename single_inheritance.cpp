#include<iostream>
using namespace std;

class base{
     protected:

     int n;
     protected:
     void setn()
     {
        cout<<"entre n:-";
        cin>>n;
     }

};
class derived :private base{

    public:
    void getn()
    {  setn();
       cout<<"value of is :"<<n<<endl;
        setn();
        
    }
    };
    int main()
    {
        derived d;
       
       
        d.getn();
    }