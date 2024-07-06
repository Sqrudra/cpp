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
    area(int radius)
    {
        cout<<"Enter radius of Circle:";
        cin>>radius;
        float area3;
        area3=3.14*radius*radius;
        cout<<"Area of circle="<<area3<<endl;
        cout<<"*********************************************************"<<endl;
        
    }
    
};
int main()
{
    int length,width,height,radius;
    area cube(length), cuboid(length,width), cone(radius);
    return 0;
}