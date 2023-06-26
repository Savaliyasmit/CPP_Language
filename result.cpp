#include<iostream>
using namespace std;

class reult
{
private:
int english,maths,science,total;
 float pr;
public:
void input()
{
    cout<<"entre english:-"<<endl;
    cin>>english;

    cout<<"entre maths:-"<<endl;
    cin>>maths;

    cout<<"entre science:-"<<endl;
    cin>>science;
    
}
void logic()
{
total=english+maths+science;
pr=float(total)/300*100;

}

void print()
{
cout<<"total is :-"<<total<<endl;
cout<<"pr is :-"<<pr;

}

     
};
int main()
{
   reult x;
   x.input();
   x.logic();
   x.print();

}    
