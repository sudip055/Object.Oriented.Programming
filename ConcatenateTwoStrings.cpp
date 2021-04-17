//Write a program to concatenate two strings using + operator.
#include<iostream>
#include<string.h>
using namespace std;
class stringss
{
    char s[50];
    public:
    void getdata()
    {
        cout<<"Enter a string:"<<endl;
        cin>>s;
    }
    void display()
    {
        cout<<"s:"<<s<<endl;
    }
    stringss operator + (stringss t)
    {
        stringss temp;
        strcpy(temp.s,s);
        strcat(temp.s,t.s);
        return temp;
    }
};
int main()
{
    stringss s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    s3.display();
}