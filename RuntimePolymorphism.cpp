#include<iostream>
#include<cstring>
using namespace std;
class media
{
    protected:
    char title[100];
    float price;
    public:
    media(char *s,float a)
    {
        strcpy(title,s);
        price=a;
    }
    virtual void display(){}
};
class book: public media
{
    int pages;
    public:
    book(char *s,float a,int p):media(s,a)
    {
        pages=p;
    }
    void display();
};
class tape :public media
{
    float time;
    public:
    tape(char *s,float a,float t):media(s,a)
    {
        time=t;
    }
    void display();
};
void book::display()
{
    cout<<"Title:"<<title<<endl;
    cout<<"Pages:"<<pages<<endl;
    cout<<"Price:"<<price<<endl;
}
void tape::display()
{
    cout<<"\nTitle:"<<title;
    cout<<"\nPlay Time:"<<time<<"mins";
    cout<<"\nPrice"<<price;
}
int main()
{
    char *title=new char[50];
    float price,time;
    int pages;
    cout<<"\nENTER BOOK DETAIL\n"<<endl;
    cout<<"Title:";cin>>title;
    cout<<"Price:";cin>>price;
    cout<<"Pages:";cin>>pages;

    book book1(title,price,pages);
    cout<<"\nENTER TAPE DETAIL\n"<<endl;
    cout<<"\nTitle"<<endl;
    cin>>title;
    cout<<"Price"<<endl;
    cin>>price;
    cout<<"Play time(mins):";
    cin>>time;
    tape tape1(title,price,time);

    media* list[2];
    list[0]= &book1;
    list[1]= &tape1;

    cout<<"\n MEDIA DETAILS";
    cout<<"\n .....BOOK.....";
    list[0]->display();
    cout<<"\n .....TAPE.....";
    list[0]->display();
    return 0;

}