#include<iostream>
using namespace std;//this is global declare stander output 

int main()
{
   int a,b;

   cout<<"\nenter A value:"; //std  (stander output )
   cin>>a;
   cout<<"\nenter B value:";//std (stander output )
   cin>>b;//mutiple value store and single value store cin>>a; or cin>>b;

  
   
int multi;
int multi1=a+b;
int multi2=a-b;
int multi3=a/b;
int multi4=a*b;

cout<<"\n addtion:"<<multi1;
cout<<"\n subtraction:"<<multi2;
cout<<"\n divison:"<<multi3;
cout<<"\n multiplay:"<<multi4;


}

/*
 c++ basic syntax

printf()->cout

<<  ->insertion
::->scopr resoulation operator

scanf()->cin

>> -> extraction operator

*/