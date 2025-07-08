#include<iostream>
#include<cmath>
using namespace std;
class Rectangle
{
private:
    float x;
    float y;
public:
    Rectangle()
    {
        x = 0;
        y = 0;
    }
    Rectangle(float a, float b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};
class Polar
{
private:
    float rad;
    float angle;
public:
    Polar()
    {
        rad = 0;
        angle = 0;
    }
    Polar(float x, float y)
    {
        rad = x;
        angle = y;
    }
    operator Rectangle()
    {
        float x;
        float y;
        x = rad * cos(angle);
        y = rad * sin(angle);
        Rectangle r1(x,y);
        return r1;
    }
    void display()
    {
        cout<<"radius = "<<rad<<endl;
        cout<<"angle = "<<angle<<endl;
    }
};
int main()
{
    Polar p(1.2925,7.28);
    Rectangle r;
    r = p;
    p.display();
    r.display();
    return 0;
}
