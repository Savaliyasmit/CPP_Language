#include<iostream>
using namespace std;

class result
{
   
   int math,science,gujarati,total;
   float pr;
   public:
   void input();
   float logic();
   void showdata();
  


};
void result::input()
   {
        cout<<"entre math marks:-";
        cin>>math;
        cout<<"entre gujarati marks:-";
        cin>>gujarati;
        cout<<"entre science marks:-";
        cin>>science;

        cout<<endl;
         logic();
   }
float result::logic()
 {
        total=math+gujarati+science;
        pr=total/3;
       
   }
void result::showdata()
{
   cout<<"Math\t\tgujaratti\t\tscience\t\ttotal\t\tpr\t\t"<<endl;
    cout<<"\t\t"<<math<<"\t\t"<<gujarati<<"\t\t\t"<<science<<"\t\t"<<total<<"\t\t"<<pr<<" %\t\t"<<endl;
}
int main() 
{
   result t[5];

   int i;
    

    for (i=0;i<3;i++)
    {
        cout<<"Student : "<<i+1<<endl;
        t[i].input();
    }

    for (i=0;i<3;i++)
    {
        cout<<"Student : [ "<<i+1<<"]";
        t[i].showdata();

    }
     
}