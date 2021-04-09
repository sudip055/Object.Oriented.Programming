#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    void getdata()
    {
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the Roll number:"<<endl;
        cin>>roll;
    }
    void display()
    {
        cout<<"Name of Student:"<<name<<endl;
        cout<<"Roll Number:"<<roll<<endl;
    }
};
int main()
{
    struct student s1;
    s1.getdata();
    s1.display();
    return 0;
}
