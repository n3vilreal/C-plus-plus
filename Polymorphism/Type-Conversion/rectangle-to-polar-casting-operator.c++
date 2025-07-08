#include<iostream>
#include<cmath>
using namespace std;
class Polar
{
private:
    float rad;
    float ang;
public:
    Polar()
    {
        rad = 0;
        ang = 0;
    }
    Polar(float x, float y)
    {
        rad = x;
        ang = y;
    }
    void display()
    {
        cout<<"radius = "<<rad<<endl;
        cout<<"angle = "<<ang<<endl;
    }
};
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
    operator Polar()
    {
        float ang;
        float rad;
        rad = sqrt(pow(x,2)+pow(y,2));
        ang = atan(y/x);
        Polar p1(ang, rad);
        return p1;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};
int main()
{
    Rectangle r(2,3);
    Polar p;
    p = r;
    r.display();
    p.display();
    return 0;
}