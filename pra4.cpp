#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Enter alphabet :";
    cin>>character;
    if(character>=97&&character<=122)
    {
        cout<<char(character-32);
    }
    else
    {
        cout<<char(character+32);
    }
return 0;
}
