//Write a c++ program that reads a year and checks wheather the entered year is leap year oe not.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any year"<<endl;
    cin>>a;
    if(a%4==0 && a%100!=0 || a%400==0)
    cout<<a<<" is a leap year";
    else
    cout<<a<<" is not leap year";

}