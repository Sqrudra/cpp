#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"Value of a is"<<a<<endl;
        cout<<"Value of b is"<<b<<endl;
    }
    complex operator*(complex x)
    {
        complex y;
        y.a=a*x.a;
        y.b=b*x.b;

        return y;
    }
};
int main()
{
    int a,b,c,d;
    cout<<"Enter number a:";
    cin>>a;
    cout<<"Enter number b:";
    cin>>b;
    complex s1,s2,s3;
    s1=complex(a,b);
    cout<<"Enter number c:";
    cin>>c;
    cout<<"Enter number d:";
    cin>>d;
    s2=complex(c,d);
    cout<<"First object"<<endl;
    s1.display();
    cout<<"Second object"<<endl;
    s2.display();
    cout<<"Final output"<<endl;
    s3=s1*s2;
    s3.display();
       
return 0;
}