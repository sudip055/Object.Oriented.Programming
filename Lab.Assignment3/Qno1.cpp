//write a c++ program to find the second largest number (or middle) among three numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three number"<<endl;
    cin>>a>>b>>c;
    if(a>=b && b>=c || c>=b && b>=a)
    cout<<b<<" is second largest number"<<endl;
    else if(b>=a && a>=c || c>=a && a>=b)
    cout<<a<<" is second largest number"<<endl;
    else 
    cout<<c<<" is second largest number"<<endl;
    return 0;
}
