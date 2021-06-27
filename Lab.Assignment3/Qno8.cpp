//Write a C++ program to count number of digits in a number.
#include<iostream>
using namespace std;
int main()
{
    int a,c=0;
    cout<<"Enter a multiple digit number:";
    cin>>a;
    while(a!=0)
    {
        c++;
        a=a/10;
    }
    cout<<"There are "<<c<<" digits.";
}