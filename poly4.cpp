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
    complex s1,s2,s3;
    s1=complex(3,6);
    s2=complex(2,7);
    cout<<"First object"<<endl;
    s1.display();
    cout<<"Second object"<<endl;
    s2.display();
    cout<<"Final output"<<endl;
    s3=s1*s2;
    s3.display();
       
return 0;
}