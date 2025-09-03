#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout << "Shape"<<endl;
    }
};
class Circle: public Shape
{
public:
    void draw()
    {
        cout << "Circle"<<endl;
    }
    void specialFeature()
    {
        cout << "Red Circle";
    }
};
class Square: public Shape
{
public:
    void draw()
    {
        cout << "Square" << endl;
    }
};
int main()
{
    Shape *s;
    Circle c;
    Square sq;
    s = &c;
    s->draw();
    s = &sq;
    s->draw();
    return 0;
}