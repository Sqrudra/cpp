#include<iostream>
using namespace std;
class base
{
    protected:
    int n;
    int bookno;
    char booktitle[20];
    float price;
    int total_price();

       public:
        void INPUT()
    {
        cout<<"Enter Book No. :";
        cin>>bookno;
        cout<<"Enter Book Title :";
        cin>>booktitle;
        cout<<"Enter Price :";
        cin>>price; 
    }

    public:
       void PURCHASE()
    {
        cout<<"Enter number of copies you want to purchase :";
        cin>>n;
        cout<<"Book No. :"<<bookno<<endl;
        cout<<"Book Title :"<<booktitle<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"Total cost="<<total_price(n);
    }

};

class derived1
{
         int total_price(int n)
    {
    return price*n;
    }
   
};

class derived2: public derived1,public base
{
    
};


      
int main()
{
    derived2 obj;
    obj.INPUT();
    obj.PURCHASE();
       
return 0;
}