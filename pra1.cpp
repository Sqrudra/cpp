#include<iostream>
using namespace std;
int main()
{
    int x,y,tem;
    cout<<"Enter value of x :";
    cin>>x;
    cout<<"Enter value of y :";
    cin>>y;
    tem=x;
    x=y;
    y=tem;
    cout<<"After swapping value of x :"<<x<<endl;
    cout<<"After swapping value of y :"<<y<<endl;
    return 0;
}