//Write a C++ program to find sum of digits of a number.
#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cout<<"Enter a multiple digit number:";
    cin>>a;
    sum=sum+a%10;
    a=a/10;
    cout<<"Sum of digits is:"<<sum;
}