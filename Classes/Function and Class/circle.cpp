#include<iostream>
using namespace std;

class Circle
{
private:
    float r;
    float area;
    float peri;

public:
    void input();
    void cal_area();
    void cal_peri();
    void display();
};

void Circle::input()
{
    cout<<"Enter radius: ";
    cin>>r;
}
void Circle::cal_area()
{
    area = 3.14*r*r;
}
void Circle::cal_peri()
{
    peri = 2*3.14*r;
}
void Circle::display()
{
    cout<<"Area = "<<area<<endl;
    cout<<"Perimeter = "<<peri<<endl;
}
int main()
{
    Circle c;
    c.input();
    c.cal_area();
    c.cal_peri();
    c.display();
    return 0;
}
