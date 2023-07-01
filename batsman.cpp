#include<iostream>
using namespace std;

class batsman
{
   int bcode,innings, notout, runs;
   float batavg;
   char bname[20];
    float calavg(){
      batavg =runs/(innings-notout);
      displaydata();
      
   } 

   
   public:

    void readdata(){

    cout<<"entre batsmancode:-"<<endl;
    cin>>bcode;
    cout<<"entre batsman name:-"<<endl;
    cin>>bname;
    cout<<"entre innings of batsman:-"<<endl;
    cin>>innings;
    cout<<"entre batsman runs:-"<<endl;
    cin>>notout;
    cout<<"entre batsman notout in balls:-"<<endl;
    cin>>runs;
    calavg();
    }

   
    void displaydata()
    {
        cout<<"batsman code is:-"<<bcode<<endl;
        cout<<"batsman name is:-"<<bname<<endl;
        cout<<"batsmanc innings is:-"<<innings<<endl;
        cout<<"batsman notout is:-"<<notout<<endl;
        cout<<"batsman runs  is:-"<<runs<<endl;
         cout<<"batsman  avrage :-"<<batavg<<endl;
        
          
         
     }
    

};
int main()
{
    batsman x;
    x.readdata();
   

}
