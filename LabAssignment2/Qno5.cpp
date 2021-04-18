//write a program that reads two numbers and swap them.
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter value of a and b:"<<endl;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap value of a and b are "<<a<<" and "<<b<<endl;
    return 0;
}