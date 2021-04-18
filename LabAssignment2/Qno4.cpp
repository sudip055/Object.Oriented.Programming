//Write a program that reads radius of circle and finds area and circumference.
#include<iostream>
using namespace std;
int main()
{
    int pi=3.14;
    float r,a,p;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r;
    p=2*pi*r;
    a=pi*(r*r);
    cout<<"Area:"<<a<<"\nCircumference:"<<p<<endl;
    return 0;
}
