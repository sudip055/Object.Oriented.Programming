//Write a C++ program to read a four digit number and print sum of its digits.
#include<iostream>
using namespace std;
int main()
{
    int a,b=0,n;
    cout<<"Enter any four digits number:"<<endl;
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        b=b+a;
    }
    cout<<"Sum of its digit is "<<b<<endl;
}
