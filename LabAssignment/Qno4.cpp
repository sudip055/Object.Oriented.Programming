//Write a C++program that reads a number and tests whether is it multiple of 5 but not 11.
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter a number:\n";
    cin>>m;
    if(m==5 && m==!11)
    cout<<"It is multiple of 5 but not 11.";
    else
    cout<<"It is multiple of 11 but not 5";
}
