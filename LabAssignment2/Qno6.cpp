//Write a program that reads temperature in degree Celsius and convert it into fahrenhit.
#include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"Enter the temperature in Celsius:"<<endl;
    cin>>c;
    f=(1.8*c)+32;
    cout<<"Temperature in Fahrenhit:"<<f<<endl;
    return 0;
}