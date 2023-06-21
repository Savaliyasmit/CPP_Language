#include<iostream>
using namespace std;
int  main()
{
   int x=50, y=60, *a, *b, temp;
 
 
   a = &x;
   b = &y;
 
   temp = *b; //60
   *b = *a;   //60=50
   *a = temp; // 50
 
   cout<<"\nafter swapping is x="<<x;
 
   cout<<"\nafter swapping is y="<<y;
 
   return 0;
}