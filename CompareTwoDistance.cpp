//write a program to compare two distance object using < and > operaters.
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    public:
    Distance(int f)
    {
        feet=f;
    }
    
    void dispalyDistance()
    {
        cout<<"f:"<<feet<<endl;
    }
    bool operator < (Distance d)
    {
        if(feet<d.feet)
        {
            return true;
        }
        else
        {
            return false;
        }
        }
        bool operator > (Distance d)
        {
        if(feet > d.feet)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Distance d1(13),d2(20);
    if(d1>d2)
    cout<<"d1 is greater than d2."<<endl;
    if(d1<d2)
    cout<<"d1 is less then d2"<<endl;
    return 0;
}