#include<iostream>

using namespace std;

class largest
{

int a,b,c;

friend void compare (largest);

public:

void set_data(int l,int w,int h)
    {

a=l;

b=w;

c=h;

    }
   
};
 void compare(largest x)
    {
    if(x.a>x.b && x.a>x.c) 
    {
        cout<<"a is largest"<<endl;
    }
    else if (x.b>x.a && x.b>x.c)
        {
            cout<<"b is largest"<<endl;
        }
    else
        {
            cout<<"c is largest"<<endl;
        }
    }
int main()
{
largest s1;
s1.set_data(10,20,30);
compare (s1);
return 0;
}


