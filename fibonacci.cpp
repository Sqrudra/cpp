#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a=0,b=1,c;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Fibonacci : ";
    for(i=0;i<n;i++)
    {
        cout<<a<<"\t";
        c=a+b;
        a=b;
        b=c;
        
    }

    return 0;
}