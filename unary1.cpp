#include<iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    complex(int x, int y)
    {

        a=x;
        b=y;

    }
    void display()
    {
    
        cout<<"vlaue a is "<<a<<endl; 
        cout<<"vlaue b is "<<b<<endl; 

    }
    void operator-()
    {

        a=-a;
        b=-b;

    }
    
};



int main()
{

    int a,b;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;

    complex s1(a,b);
    s1.display();
    cout<<"after function call"<<endl;
    -s1;
    s1.display();
    

    return 0;
}