#include <iostream>
using namespace std;
 
int main()
{
   int x, y, *a, *b, temp;

   cout<<"enter value x:-";
   cin>>x;
   cout<<"enter value y:-";
   cin>>y;

 
 
   a = &x;
   b = &y;
 
   temp = *b; //60
   *b = *a;   //60=50
   *a = temp; // 50
 
   cout<<"\nafter x swap is:-"<<x;
   cout<<"\nafter y swap is:-"<<y;
 
   return 0;
}