//Write a program to read a character from keyboard and convert it into uppercase if it is in lower case and viceversa.
#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter a valid character:"<<endl;
cin>>ch;
if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
{
    if(ch>='A' && ch<='Z')
    ch=ch+32;
    else if(ch>='a' && ch<='z')
    ch=ch-32;
    else
    ;
    cout<<"Converted Character is:"<<ch<<endl;
}
else
{
    cout<<"Enter character is not a valid alphabet!"<<endl;
}
}