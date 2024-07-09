#include<iostream>
using namespace std;
class REPORT 
{
   
int adno;
char name[20];
float marks[5];
float average=0;
float GETAVG(float average);

public:
void READINFO()
{
        cout<<"Enter Admission NO. :";
        cin>>adno;
        cout<<"Enter name:";
        cin>>name;
        for (int j = 0; j < 5; j++)
        {
                
        cout<<"Enter marks of subject "<<j+1<<":";
        cin>>marks[j];
    
        
        }
        
}

void DISPLAYINFO()
{
    cout<<"Student's Admission NO. :"<<adno<<endl;
    cout<<"Student's name:"<<name<<endl;
    for (int i = 0; i < 5; i++)
    {
    cout<<"Student's marks:"<<marks[i]<<endl;
            
    }
    
    cout<<""<<name<<"'s average marks:"<<GETAVG(average );
}

};
float REPORT::GETAVG(float average )
{

    for(int i=0;i<5;i++)
    {
     average+=marks[i];
    }
     return average/5;
}

int main()
{
    class REPORT obj;
    obj.READINFO();
    obj.DISPLAYINFO();

     return 0;
}