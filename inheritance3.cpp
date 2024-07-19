#include<iostream>
using namespace std;
class base
{
  protected:
    
    int total_price(int Price,int n);

    public: 
    int n;
};

class derived1
{
    public:
    int Bookno;
    char Booktitle[20];
    float Price;
   
    void INPUT()
    {
        cout<<"Enter Book No. :";
        cin>>Bookno;
        cout<<"Enter Book Title :";
        cin>>Booktitle;
        cout<<"Enter Price :";
        cin>>Price; 
    }

};

int base::total_price(int Price,int n)
{
    return Price*n;
}

class derived2: public derived1,public base
{
      public:
    
       void PURCHASE()
    {
        cout<<"Enter number of copies you want to purchase :";
        cin>>n;
        cout<<"Book No. :"<<Bookno<<endl;
        cout<<"Book Title :"<<Booktitle<<endl;
        cout<<"Price :"<<Price<<endl;
        cout<<"Total cost="<<total_price(Price,n);
    }

};


      
int main()
{
    derived2 obj;
    obj.INPUT();
    obj.PURCHASE();
       
return 0;
}