//Write a C++program to input time in second convert it into hour, minute and second.
#include<iostream>
using namespace std;
int main()
{
    int time=0;
    int hour=0;
    int min=0;
    int sec=0;
    cout<<"Enter a time in seconds: ";
    cin>>time;

    hour=time/3600;
    time=time%3600;
    min=time/60;
    time=time%60;
    sec=time;

    cout<<"\n The time in HH:MM:SS format is: "<<hour<<"hour "<<min<<"minutes "<<sec<<"seconds ";
    return 0;
}