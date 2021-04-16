//Write a program to overload unary minus(-) operator to invert sign of data member of a distance object.
#include<iostream>
using namespace std;
class distance
{
    private:
    int feet;
    int inches;
    public:
    distance()
    {
        feet=0;
        inches=0;
    }
    distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void displaydistance()
    {
        cout<<"Feet:"<<feet<<"Inches:"<<inches<<endl;
    }
    distance operator-()
    {
        feet=-feet;
        inches=-inches;
        return distance(feet,inches);
    }
};
int main()
{
    distance D1(11,10),D2(-6,-10);
    -D1;
    D1.displaydistance();
    -D2;
    D2.displaydistance();
    return 0;
}
