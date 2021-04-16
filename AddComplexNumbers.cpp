//write a program to add two complex number using + operator.
#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void setdata (int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"\nb="<<b<<endl;
        cout<<"In the form of complex number"<<endl;
        cout<<a<<"+"<<b<<endl;
    }
    friend complex operator + (complex x1,complex x2);
};
complex operator + (complex x1,complex x2)
{
    complex temp;
    temp.a=x1.a+x2.a;
    temp.b=x1.b+x2.b;
    return (temp);
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(2,4);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.showdata();
}