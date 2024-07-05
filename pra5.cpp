#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int total,n;
    cout<<"Enter number :";
    cin>>n;
    total=fact(n);
    cout<<"Factorial is :"<<total;
    return 0;
}
