/*Write a program  that will obtain the length and width rectangle from the user and compute its area and perimeter.*/
#include<iostream>
using namespace std;
int main()
{
    int l,b,a,p;
    cout<<"Eznter length and breadth of rectangle:"<<endl;
    cin>>l>>b;
    a=l*b;
    p=2*(l+b);
    cout<<"Area="<<a<<"\nPerimeter="<<p<<endl;
    return 0;
}