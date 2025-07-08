#include<iostream>
#include<cmath>
using namespace std;
class Polar
{
private:
    double radius;
    double angle;
public:
    Polar()
    {
        radius = 0;
        angle = 0;
    }
    Polar(double r, double a)
    {
        radius = r;
        angle = a;
    }
    void display()
    {
        cout<<radius<<" radius"<<endl;
        cout<<angle<<" angle"<<endl;
    }
    double getRadius()
    {
        return radius;
    }
    double getAngle()
    {
        return angle;
    }
};
class Rectangle
{
private:
    double x;
    double y;
public:
    Rectangle()
    {
        x = 0;
        y = 0;
    }
    Rectangle(Polar p)
    {
        x = p.getRadius()*cos(p.getAngle());
        x = p.getRadius()*sin(p.getAngle());
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};
int main()
{
    Polar p(5,0.8);
    Rectangle r;
    r = p;
    p.display();
    r.display();
    return 0;
}