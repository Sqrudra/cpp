#include<iostream>
using namespace std;
class BOOK
{
    int N;
    int BOOKNO;
    char BOOKTITLE[20];
    float PRICE;
    float TOTAL_COST(int N);

public:
    void INPUT()
    {
        cout<<"Enter Book No. :";
        cin>>BOOKNO;
        cout<<"Enter Book Title :";
        cin>>BOOKTITLE;
        cout<<"Enter Price :";
        cin>>PRICE; 
    }
    void PURCHASE()
    {
        cout<<"Enter number of copies you want to purchase :";
        cin>>N;
        cout<<"Book No. :"<<BOOKNO<<endl;
        cout<<"Book Title :"<<BOOKTITLE<<endl;
        cout<<"Price :"<<PRICE<<endl;
        cout<<"Total cost="<<TOTAL_COST(N);
    }

};
float BOOK::TOTAL_COST(int N)
{
    return PRICE*N;
}
int main()
{
    class BOOK obj;
    obj.INPUT();
    obj.PURCHASE();

    return 0;
}
