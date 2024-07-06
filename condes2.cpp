#include<iostream>
using namespace std;
class volume
{
    public:
    volume(int length)
    {
        cout<<"Enter length of cube:";
        cin>>length;
        int vol1;
        vol1=length*length*length;
        cout<<"Volume of cube="<<vol1<<endl;
        cout<<"*********************************************************"<<endl;
    
    }
    volume(int length,int width,int height)
    {
        cout<<"Enter length of cuboid:";
        cin>>length;
        cout<<"Enter width of cuboid:";
        cin>>width;
        cout<<"Enter height of cuboid:";
        cin>>height;
        int vol2;
        vol2=length*width*height;
        cout<<"Volume of cuboid="<<vol2<<endl;
        cout<<"*********************************************************"<<endl;
    }
    volume(int radius,int height)
    {
        cout<<"Enter radius of cone:";
        cin>>radius;
        cout<<"Enter height of cone:";
        cin>>height;
        float vol3;
        vol3=3.14*radius*radius*height;
        cout<<"Volume of cone="<<vol3<<endl;
        cout<<"*********************************************************"<<endl;
        
    }
    
};
int main()
{
    int length,width,height,radius;
    volume cube(length), cuboid(length,width,height), cone(radius,height);
    return 0;
}