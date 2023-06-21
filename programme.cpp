#include<iostream>
using namespace std;
int  main()
{
   int x, y, *a, *b, temp;

cout<<"entre value x:";
cin>>x;
cout<<"entre value y:";
cin>>y;

   a = &x;
   b = &y;
 
   temp = *b; //60
   *b = *a;   //60=50
   *a = temp; // 50
 
   cout<<"\nafter swapping is x:"<<x<<"\n after swapping is y:"<<y;
 
//    cout<<"\nafter swapping is y="<<y;
 
   return 0;
}