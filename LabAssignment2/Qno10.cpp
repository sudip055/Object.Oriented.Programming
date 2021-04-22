/*Write a program to read three number and print the following results.
       a.Sum of values.
       b.Averages of three values.
       c.Largest of three.
       d.Smallest of three.
*/
#include<iostream>
using namespace std;
int main()
{
    int x,y,z,sum,average,smallest,largest;
    cout<<"Enter any three numbers:"<<endl;
    cin>>x>>y>>z;
    if(x<y)
    {
        smallest=x;
        largest=y;
    }
    else
    {
        smallest=y;
        largest=x;
    }    
    if(z<smallest)
    {
        smallest=z;
    }
    else if(z>largest)
    {
        largest=z;
    }
    sum=x+y+z;
    average=sum/z;
    cout<<"***RESULTS***"<<endl;
    cout<<"Smallest of three number is "<<smallest<<endl;
    cout<<"Largest of three number is "<<largest<<endl;
    cout<<"Sum is three number is "<<sum<<endl;
    cout<<"Average of three number is "<<average<<endl;
    return 0;
}