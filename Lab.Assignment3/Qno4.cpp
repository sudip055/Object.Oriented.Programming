//Write a C++ program to display series 1/2  2/3  3/4  4/5  5/6…………………..n-1/n
#include<iostream>
using namespace std;
int main()
{
int a,i;
cout<<"Enter the number of sequence to display :";
cin>>a;
for(i=1;i<a;i++)
cout<<i<<"/"<<i+1<<"\t";
}