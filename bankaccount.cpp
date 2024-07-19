#include<iostream>
using namespace std;
class account
{
    int pin;
    int con;
    int choice;
    char acname[20]="Batman";
    int balance=50000;
    int deposit;
    int withdrawal;
    public:
    void read_data();
   


};

void account::read_data()
    {
        start:
        cout<<"Enter your pin:";
        cin>>pin;
        if(pin==1234)
        {
            here:
            cout<<"***************************************************************************************"<<endl;
            cout<<"Account name:"<<acname<<endl;
            cout<<"1. Withdrawal"<<endl;
            cout<<"2. Deposit"<<endl;
            cout<<"3. Check balance"<<endl;
            cout<<"0. exit"<<endl;
            cout<<"***************************************************************************************"<<endl;

            cout<<"Enter your choice:";
            cin>>choice;

            if(choice==1)
            {
                cout<<"Enter amount:";
                cin>>withdrawal;
                  if (balance<=withdrawal)
                {
                    cout<<"Your account has not sufficient money"<<endl;
                }else
                {
                     balance-=withdrawal;

                }

               

              
                cout<<"Total balance:"<<balance<<"Rs."<<endl;
            cout<<"***************************************************************************************"<<endl;

                cout<<"Continue for bank service (YES=1/NO=0)"<<endl;
                cin>>con;
cout<<"***************************************************************************************"<<endl;
                if(con==1)
                {
                    goto here;
                }
                else if(con==0)
                {
                    goto there;
                }
            }
            else if(choice==2)
            {
                  cout<<"Enter amount:";
                cin>>deposit;

                balance+=deposit;

                cout<<"Total balance:"<<balance<<"Rs."<<endl; 
            cout<<"***************************************************************************************"<<endl;

                cout<<"Continue for bank service (YES=1/NO=0)"<<endl;
                cin>>con;
                cout<<"***************************************************************************************"<<endl;
                 if(con==1)
                {
                    goto here;
                }
                else if(con==0)
                {
                    goto there;
                }

            }
            else if(choice==3)
            {
                  
                cout<<"Your total balance is:"<<balance<<"Rs."<<endl; 
            cout<<"***************************************************************************************"<<endl;

                cout<<"Continue for bank service (YES=1/NO=0)"<<endl;
                cin>>con;
                cout<<"***************************************************************************************"<<endl;
                 if(con==1)
                {
                    goto here;
                }
                else if(con==0)
                {
                    goto there;
                }
            }
            else if(choice==0)
            {
                there:
                cout<<"Thank you for banking.";
                
            }
        }
        else
        {
            cout<<"Enter correct pin!"<<endl;
            cout<<"***************************************************************************************"<<endl;
            goto start;
        }
    

    };

    
      
int main()
{
       account obj;
       obj.read_data();

return 0;
}