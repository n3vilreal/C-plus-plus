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
    float get_x()
    {
        return x;
    }
    float get_y()
    {
        return y;
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
    float ang;
public:
    Polar()
    {
        rad = 0;
        ang = 0;
    }
    Polar(Rectangle r)
    {
        rad = sqrt(pow(r.get_x(),2)+pow(r.get_y(),2));
        ang = atan(r.get_y()/r.get_x());
    }
    void display()
    {
        cout<<"angle = "<<ang<<endl;
        cout<<"radius = "<<rad<<endl;
    }
};
int main()
{
    Polar p;
    Rectangle r(2,7);
    p = r;
    r.display();
    p.display();
    return 0;
}