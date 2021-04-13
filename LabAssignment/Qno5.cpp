//Write a C++program that reads a number and finds sum of the squares of digits (For example, if the number if 235 then sum = 22+32+52 =38) 
#include<iostream>
using namespace std;
int main()
{
    int m,n,sum=0;
    cout<<"Enter a number:";
    cin>>m;
    while(m!=0)
    {
        n=m%10;
        sum=sum+n*n;
        m=m/10;
    }
    cout<<"Sum of square of digit is "<<sum;
}