#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,k;
    cout<<"Enter value of n :";
    cin>>n;
    m=n;
    for(i=0;i<n;i++)
    {
        for(j=m;j>=1;j--)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<"* ";
        }
        m--;
        cout<<endl;
    }

    return 0;
}