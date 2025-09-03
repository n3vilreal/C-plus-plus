#include<iostream>
using namespace std;
class A
{
public:
    void start()
    {
        cout<<"A starts";
    }
};
class B
{
public:
    void start()
    {
        cout<<"B starts";
    }
};
class C : public A, public B
{

};
int main()
{
    C c;
    // c.start(); Ambuigity
    c.A::start();
    c.B::start();
}