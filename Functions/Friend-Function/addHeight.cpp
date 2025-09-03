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
        inch = b;
    }
    friend Height addHeight(Height h1, Height h2);
    void display()
    {
        feet = feet + inch/12;
        inch %= 12;
        cout<<feet<<" feet and "<<inch<<" inches";
    }
};
Height addHeight(Height h1, Height h2)
{
    Height temp;
    temp.feet = h1.feet + h2.feet;
    temp.inch = h1.inch + h2.inch;
    return temp;
}
int main()
{
    Height h1,h2(5,9),h3(5,11);
    h1 = addHeight(h2, h3);
    h1.display();
    return 0;
}