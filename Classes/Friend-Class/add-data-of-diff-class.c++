#include<iostream>
using namespace std;
class Two; //Forward Declaration
class One
{
private:
    int a;
public:
    void getData();
    friend class Two;
};
class Two
{
private:
    int b;
public:
    void getData();
    void add_data(One o);
};
void One::getData()
{
    cout<<"Enter a:";
    cin>>a;
}
void Two::getData()
{
    cout<<"Enter b:";
    cin>>b;
}
void Two::add_data(One o)
{
    int sum;
    sum = o.a + b;
    cout<<"Sum = "<<sum<<endl;
}
int main()
{
    One o;
    Two t;
    o.getData();
    t.getData();
    t.add_data(o);
    return 0;
}
