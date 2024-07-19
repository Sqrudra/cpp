#include<iostream>
using namespace std;
class hotel
{
int choice;
int dish;
int qty;

public:
void menu();
void order();
void status();
void bill();
void display();

};

void hotel::menu()
{
    cout<<"_________________________________________________________________________________________"<<endl;
    cout<<"                            Menu"<<endl;
    cout<<"\n\n";
    cout<<"_________________________________________________________________________________________"<<endl;
    cout<<"NO.\t\t\t Dish name\t\t\t\t\tPrice"<<endl;
    cout<<"_________________________________________________________________________________________"<<endl;
    cout<<"1.\t\t\tPunjabi dish \t\t\t\t\t200Rs."<<endl;
    cout<<"2.\t\t\tGujarati dish\t\t\t\t\t180Rs."<<endl;
    cout<<"3.\t\t\tPizza        \t\t\t\t\t300Rs."<<endl;
    cout<<"4.\t\t\tDosa         \t\t\t\t\t120Rs."<<endl;
    cout<<"5.\t\t\tManchurian   \t\t\t\t\t100Rs."<<endl;
    cout<<"6.\t\t\tPav bhaji    \t\t\t\t\t150Rs."<<endl;
    cout<<"_________________________________________________________________________________________"<<endl;



} 

void hotel::order()
{
    cout<<"Enter Dish No. :";
    cin>>dish;
    cout<<"Enter quantity :";
    cin>>qty;

    
} 

void hotel::status()
{
    switch(dish)
    {
        case 1:
        cout<<"1.\t\t\tPunjabi dish\t\t\tQuantity\t\tRate\t\tAmount"<<endl;

    }
} 

void hotel::bill()
{
       cout<<"_________________________________________________________________________________________"<<endl;
    cout<<"\t\t\t\tTulsi restaurent"<<endl;
    cout<<"\t\t\t102 ,City center,Yogi chowk,Surat"<<endl;
    cout<<"\t\t\t\tMobile No:8050480504"<<endl;
       cout<<"_________________________________________________________________________________________"<<endl;
    cout<<"No.\t\t\tName\t\t\tQuantity\t\tRate\t\tAmount"<<endl;
       cout<<"_________________________________________________________________________________________"<<endl;

    
} 

void hotel::display()
{
    cout<<"For menu press 1"<<endl;
    cout<<"To order dish press 2"<<endl;
    cout<<"Your current status press 3"<<endl;
    cout<<"To make bill press 4"<<endl;
    cout<<"Exit press 0"<<endl;
    cin>>choice;
}
int main()
{
       hotel obj;
       obj.menu();
       obj.display();
       obj.bill();
return 0;
}