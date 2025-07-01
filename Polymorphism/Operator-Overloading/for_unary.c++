#include<iostream>
using namespace std;
class Sample
{
private:
    int x,y,z;
public:
    void getData(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
    void operator-(); //Syntax
};
void Sample::operator-()
{
    x = -x;
    y = -y;
    z = -z;
    
}
int main()
{
    Sample s;
    s.getData(10,-20,30);
    s.display();
    -s; //s.operator-()
    cout<<"After operator overloading"<<endl;
    s.display();
    return 0;
}