//Write a C++ program to evaluate the series: S=1+2*1+3*2+....N*N-1
#include<iostream>
using namespace std;
int main()
{
    int a,b=1,sum=1;
    cout<<"Enter the no. of terms to evaluate:";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        sum=sum+b*i;
        b++;
    }
    cout<<"The evaluation of series results:"<<sum;
}