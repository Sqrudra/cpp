#include<iostream>
using namespace std;
class calc
{
    public:
    void volume(int length)
    {
        cout<<"Enter length of cube:";
        cin>>length;
        int vol1;
        vol1=length*length*length;
        cout<<"Volume of cube="<<vol1<<endl;
        cout<<"*********************************************************"<<endl;
    
    }
    void volume(int length,int width,int height)
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
    void volume(int radius,int height)
    {
        cout<<"Enter radius of cone:";
        cin>>radius;
        cout<<"Enter height of cone:";
        cin>>height;
        float vol3;
        vol3=0.3333*3.14*radius*radius*height;
        cout<<"Volume of cone="<<vol3<<endl;
        cout<<"*********************************************************"<<endl;
        
    }
    
};
int main()
{
    int length,width,height,radius;
    class calc obj;
    obj.volume(length);
    obj.volume(length,width,height);
    obj.volume(radius,height);
    return 0;
}