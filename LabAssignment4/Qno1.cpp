//Derving a subclass from super class.
#include<iostream>
using namespace std;
class shape
{
    int width,height;
    public:
    void read(int a,int b)
    {
        width=a;
        height=b;
    }
}
class rectangle :public shape
{
    public:
    int area()
    {
        return(width * height );
    }
}
int main()
{
    rectangle rect;
    rect.read(4,2);
    cout<<"Area of rectangle is : "<<rect.area<<endl;
    return 0;
}
