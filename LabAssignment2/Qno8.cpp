//Write aC++ program that reads a number and check whether it is Armstrong’s number or not.
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,temp;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    cout<<"It is armstrong number"<<endl;
    else
    cout<<"It is not armstrong number"<<endl;
    return 0;
}
