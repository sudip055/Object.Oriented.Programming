//Write a C++program that reads a number and tests whether is it multiple of 5 or 11.
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter a number:";
    cin>>m;
    if(m%5==0)
    cout<<m<<" is multiple of 5";
    else if(m%11==0)
    cout<<m<<" is multiple of 11";
    else 
    cout<<m<<" is neither multiple of 5 or 11";
}