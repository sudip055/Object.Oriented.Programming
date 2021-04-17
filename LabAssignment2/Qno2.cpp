//Write a program to read two integer values m and n and to decide and print whether m ia a multiple of n.
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter two integers"<<endl;
    cin>>m>>n;
    if(m%n==0)
    cout<<"m is multiple of n"<<endl;
    else
    cout<<"m is not multiple of n"<<endl;
    return 0;
}