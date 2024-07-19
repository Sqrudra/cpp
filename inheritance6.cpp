#include<iostream>
using namespace std;
class base
{
    protected:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    
    float calcavg();


    public:
 
    
  


   

   

};
class child1:public base
{
    public:
       void readdata()
    {
        cout<<"Enter Batsman's code :";
        cin>>bcode;
        cout<<"Enter Batsman's name :";
        cin>>bname;
        cout<<"Enter Batsman's runs :";
        cin>>runs;
        cout<<"Enter Batsman's inings :";
        cin>>innings;
        cout<<"Enter Batsman's not out :";
        cin>>notout;
    }

};
class child2:public child1,public base
{
    public:
     void displaydata()
    {
       calcavg();
         
        cout<<"Batsman's code :"<<bcode<<endl;
        cout<<"Batsman's name :"<<bname<<endl;
        cout<<"Batsman's runs :"<<runs<<endl;
        cout<<"Batsman's inings :"<<innings<<endl;
        cout<<"Batsman's not out :"<<notout<<endl;
        cout<<"Batsman's average:"<<batavg<<endl;
    }

};
     float batsman::calcavg()
    {
        batavg=runs/(innings-notout);
        return batavg;
    }
 
int main()
{    child2 obj;
    obj.readdata();
    obj.displaydata();
    
    return 0;
}