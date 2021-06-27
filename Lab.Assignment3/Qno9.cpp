//Write a C++ program to reverse a number.
#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"Enter a number:";
    cin>>a;
    n=a;
    while(a!=0)
    {
        b=b*10+a%10;
        a=a/10;
    }
    cout<<"Reverse of "<<n<<" is "<<b;
}