#include<iostream>
using namespace std;
class area
{
    public:
    area(int length)
    {
        cout<<"Enter length of square:";
        cin>>length;
        int area1;
        area1=length*length;
        cout<<"Area of cube="<<area1<<endl;
        cout<<"*********************************************************"<<endl;
    
    }
    area(int length,int width)
    {
        cout<<"Enter length of rectangle:";
        cin>>length;
        cout<<"Enter width of rectangle:";
        cin>>width;
        int area2;
        area2=length*width;
        cout<<"Area of Rectangle="<<area2<<endl;
        cout<<"*********************************************************"<<endl;
    }
    area(float radius,float height,int a)
    {
        cout<<"Enter radius of Cylinder:";
        cin>>radius;
        cout<<"Enter height of Cylinder:";
        cin>>height;
        float area3;
        area3=2*3.14*radius*(height+radius);
        cout<<"Area of cylinder="<<area3<<endl;
        cout<<"*********************************************************"<<endl;
        
    }
    
};
int main()
{
    int length,width,height,radius,a;
    area cube(length), cuboid(length,width), circle(radius,height,a);
    return 0;
}