#include<iostream>
using namespace std;
class Height
{
private:
    int feet;
    int inch;
public:
    Height()
    {
        feet = 0;
        inch = 0;
    }
    Height(int a, int b)
    {
        feet = a;
        inch =b;
    }
    friend Height operator +(Height &h1, Height &h2)
    {
        Height temp;
        temp.feet = h1.feet + h2.feet;
        temp.inch = h1.inch + h2.inch;
        return temp;
    }
    void display()
    {
        feet = feet + inch/12;
        inch = inch % 12;
        cout<<feet<<" feet and "<<inch<<" inch";
    }
};
int main()
{
    Height h1(2,3);
    Height h2(2,10);
    Height h3;
    h3 = h1 + h2;
    h3.display();
    return 0;
}