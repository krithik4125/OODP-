#include<iostream>
using namespace std;
class Volume
{
    public:
    int calculateVolume(int side)
    {
        return side*side*side;
    }
    int calculateVolume(int length,int breadth,int height)
    {
        return length*breadth*height;
    }

};

int main()
{
    Volume v;
    cout<<"Volume of cube: "<<v.calculateVolume(5)<<endl;
    cout<<"Volume of cuboid: "<<v.calculateVolume(5,4,3)<<endl;
    return 0;   
}