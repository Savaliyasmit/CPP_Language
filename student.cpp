#include<iostream>


using namespace std;

class student
{    

    int admno;
    char sname[20];
    float eng, math, science,total,pr;
    float sum()
    {
        total=math+science+eng;
        pr=total/300*100;
        Showdata();
    }
    public:

    void takedata()
    {
        cout<<"entre admno:-"<<endl;
        cin>>admno;
        cout<<"entre student name:-"<<endl;
        cin>>sname;
        cout<<"entre english marks:-"<<endl;
        cin>>eng;
        cout<<"entre mats marks:-"<<endl;
        cin>>math;
        cout<<"entre secience marks:-"<<endl;
        cin>>science;
        sum();
    }

   void Showdata()
   {

       cout<<"admno is:-"<<admno<<endl;
       cout<<"student name is:-"<<sname<<endl;
        cout<<"english marks is:-"<<eng<<endl;
        cout<<"math marks:-"<<math<<endl;
        cout<<"science marks is:-"<<science<<endl;
        cout<<"total is:-"<<total<<endl;
        cout<<"your percentiale:-"<<pr<<endl;

   }

};

int main()
{
    student x;
    x.takedata();
    

}