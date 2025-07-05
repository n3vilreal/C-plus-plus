#include<iostream>
using namespace std;
class Two; //Forward Declaration
class One
{
private:
    int a;
public:
    void getA();
    void displayA();
    friend void swap(One &o, Two &t);
};
class Two
{
private:
    int b;
public:
    void getB();
    void displayB();
    friend void swap(One &o, Two &t);
};
void One::getA()
{
    cout<<"Enter a: ";
    cin>>a;
}
void Two::getB()
{
    cout<<"Enter b: ";
    cin>>b;
}
void One::displayA()
{
    cout<<"a : "<<a<<endl;
}
void Two::displayB()
{
    cout<<"b : "<<b<<endl;
}
void swap(One &o, Two &t)
{
    int temp;
    temp=o.a;
    o.a=t.b;
    t.b=temp;
}
int main()
{
    One o;
    Two t;
    o.getA();
    t.getB();
    cout<<"Before swap: ";
    o.displayA();
    t.displayB();
    cout<<"After swap: ";
    swap(o,t);
    o.displayA();
    t.displayB();
    return 0;
}