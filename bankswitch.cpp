#include<iostream>
#include <stdlib.h>  

using namespace std;

class bank
{
  private : 
    int depo,balance=30000,withd;
    int b;
     int acno;
    char name[30];
       

  public:  
 
    bank()
    {
      
      cout<<endl<<"\t Welcome To Time Bank "<<endl;
       
       cout<<"Create Your Account "<<endl;
       
        cout<<"Press [1] To Go Saving Account :"<<endl;
       
        cin>>b;

       switch(b)
       {
       case 1:
             OpenAccount();
            saving_acc();
          break; //  end saving account 

      

       default:
        break;
       }
    }

     void OpenAccount()
    {
        cout << "Enter Account Number: -";
        cin >> acno;
        cout << "Enter Name: -";
        cin >> name;
        cout << "Enter  Balance: -";
        cin >> balance;
                  
                  cout<<"\n";
           cout<<"your account details for new user:-" <<endl; 
          cout<<"your Account number  is : -"<<acno<<endl;
         cout<<"your name is :- "<<name<<endl;
          cout<<"your blance is :- "<<balance<<endl;
    }   
    

    void saving_acc()
    {
          cout<<"\n Saving Account : "<<endl;
           cout<<endl<<"Press [1] To Check Account Balance :- ";
           cout<<endl<<"Press [2] To Deposit Monney-: ";
           cout<<endl<<"Press [3] To Withdrawal  Monney :- "<<endl;
           cout<<"press [4] To Exit:-"<<endl;
            cin>>b;
             switch (b)
             {
             case 1:
                 show_Balance();
              break;
             case 2:
                 Deposit();
              break;
             case 3:
                 withdrawal();
              break; 
              case 4:
                 saving_acc();
                 break;
              case 0:
                break;
             }
    }


    void show_Balance()
    {
      cout<<"Your Balance "<<endl<<"\t"<<balance<<endl; 
          
      cout<<endl<<"Press [0] To Back To Main Menu : ";
      cout<<endl<<"Press [7] To Exit : ";
      cin>>b;
      switch (b)
      {
      case 0:
            saving_acc();
        break;
      case 7:
           break;
      }   
    }

    int Deposit()
    {
      cout<<"Enter Yout deposit Amount : ";
      cin>>depo;

      balance=depo+balance;

      cout<<"Your Current balance is ";
      show_Balance();
    
      cout<<endl<<"Press [0] To Back To Main Menu : ";
      cout<<endl<<"Press [7] To Exit : ";
      cin>>b;
      switch (b)
      {
      case 0:
            bank();
        break;
      case 7:
           break;
      }
    }

    int withdrawal()
    {
      cout<<"Enter  your withdrawal Amount : ";
      cin>>withd;

      balance = balance - withd;

      cout<<"Your Current balance is ";
      show_Balance();

          
      cout<<endl<<"Press [0] To Back To Main Menu : ";
      cout<<endl<<"Press [7] [0] pressTo Exit : ";
      cin>>b;
      switch (b)
      {
      case 0:
            bank();
        break;
      case 7:
           break;
      }

    }


    
};

int main ()
{
  bank d;

}