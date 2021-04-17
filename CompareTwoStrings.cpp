//Write a program to compare two strings using == operator.
#include<iostream>
#include<string.h>
using namespace std;
class checkstring
{
    char str[100];
    public:
    void getstring()
    {
        gets(str);
    }
    string operator == (checkstring s)
    {
        if(!strcmp(str,s.str))
        {
            return "Are equal.";
        }
        else
        {
            return "Not equal.";
        }
    }
};
int main()
{
    checkstring s1,s2;
    string s3;
    cout<<"Enter first string:\t";
    s2.getstring();
    s3=(s1==s2);
    cout<<s3;
    return 0;
}