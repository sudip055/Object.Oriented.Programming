//Write a program to read three numbers from keyboard and print out the largest of them without using if statement.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,largest;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    largest=c > (a > b ? a : b) ? c : (a > b ? a : b);
    cout<<"The largest number is "<<largest<<endl;
    return 0;
}