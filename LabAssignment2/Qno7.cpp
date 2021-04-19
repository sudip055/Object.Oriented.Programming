//Write a program that reads P,T and R.Find simple interest and amount.
#include<iostream>
using namespace std;
int main()
{
    int p,t,r,si,a;
    cout<<"Enter principle,rate and time:"<<endl;
    cin>>p>>r>>t;
    si=(p*t*r)/100;
    a=p+si;
    cout<<"Simple Interest:"<<si<<"\nAmount:"<<a<<endl;
    return 0;
}