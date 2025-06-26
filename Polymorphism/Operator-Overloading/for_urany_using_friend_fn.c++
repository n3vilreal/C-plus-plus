#include<iostream>
using namespace std;
class Sample
{
private:
    int x,y,z;
public:
    void getData(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
    friend void operator-(Sample &temp);
};
void operator-(Sample &temp)
{
    temp.x = -temp.x;
    temp.y = -temp.y;
    temp.z = -temp.z;
}
int main()
{
    Sample s;
    s.getData(10,-20,30);
    s.display();
    -s; //operator-(s)
    cout<<"After operator Overloading"<<endl;
    s.display();
    return 0;
}