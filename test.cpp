#include<iostream>
#include<string>

using namespace std;

class Test
{
private:
    int testcode,NoCandidate,CenterReqd; 
    string Description; 

    float Calcntr()
    {
        return (NoCandidate/100+1);
    }
    
public:

  void Schedule()
   {
     cout<<"Enter a Test Code : ";  //  230
     cin>>testcode;  
     cout<<endl<<"Enter a Description : "; //  National Level Exam // Sem-V
     cin>>Description;
     cout<<endl<<"Enter a NoCandidate : ";  // i am Enter my set No 14611 
     cin>>NoCandidate;
     Disp_test();
    }

   void Disp_test()
    {
     cout<<"Tast Code : "<<testcode;
     cout<<endl<<"Description : "<<Description;
     cout<<endl<<"NoCandidate : "<<NoCandidate;
     CenterReqd = Calcntr();
     cout<<endl<<"Your CenterReqd is : "<<CenterReqd;
    }
    
};


int main ()
{
    Test exam;

    exam.Schedule();
}
