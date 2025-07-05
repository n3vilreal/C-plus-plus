#include<iostream>
using namespace std;
class Two;  //Forward declaration
class One
{
private:
    int a;

public:
    void getA()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    friend void max(One o, Two t);
};
class Two
{
private:
    int b;

public:
    void getB()
    {
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    friend void max(One o, Two t);
};
void max(One o, Two t)
{
    if(o.a>t.b)
    {
        cout<<o.a<<" is Maximum";
    }
    else
    {
        cout<<t.b<<" is Maximum";
    }
}
int main()
{
    One o;
    Two t;
    o.getA();
    t.getB();
    max(o,t);
}