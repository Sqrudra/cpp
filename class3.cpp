#include<iostream>
using namespace std;
class fuel
{
    int Flightnumber;
    char Destination[50];
    float Distance;
    float Fuel;
    int CALFUEL()
    {
        if(Distance<=1000)
        {
            Fuel=500;
            printf("Fuel needed:%d",Fuel);
        }
        else if(Distance>1000&&Distance<=2000)
        {
            Fuel=1100;
            printf("Fuel needed:%d",Fuel);
        }
        else if(Distance>2000)
        {
            Fuel=2200;
            printf("Fuel needed:%d",Fuel);
        }
        return Fuel;
    }
    public:

    void FEEDINFO()
    {
        cout<<"Enter Flight number :";
        cin>>Flightnumber;
        cout<<"Enter Destination :";
        cin>>Destination ;
        cout<<"Enter Distance :";
        cin>>Distance ;

    }

    void SHOWINFO()
    {
            
        cout<<"Enter Flight number :"<<Flightnumber<<endl;
        cout<<"Enter Destination :"<<Destination<<endl;
        cout<<"Enter Distance :"<<Distance<<endl;
        cout<<CALFUEL();

        
    }
};
int main()
{
    class fuel obj;
    obj.FEEDINFO();
    obj.SHOWINFO();
    return 0;
}