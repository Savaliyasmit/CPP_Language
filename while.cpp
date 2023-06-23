/*1
 1 2 3 4
 1 2 3 4
 1 2 3 4
 1 2 3 4
*/




#include<iostream>
using namespace std;
int main()
{

int i,n;

cout<<"entre number to print series:-";
cin>>n;
i=1;
while(i<=n)
{
  int j=1;
  while (j<=n)
  {
    cout<<" "<<j;
    j++;

  }
  cout<<"\n";
  i++;
}


}