//Write a C++program that reads a number and tests whether it is multiple of 5 or not.
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter a number:";
    cin>>m;
    if(m%5==0)
    cout<<"It is multiple of 5";
    else
    cout<<"It is not a multiple of 5";
}
