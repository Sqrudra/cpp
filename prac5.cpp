#include<iostream>
using namespace std;
void reverse(int n)
{
    int rev=0,rem;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<rev;
}
int main()
{
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    reverse(n);
    return 0;  
}