#include<iostream>
using namespace std;
class One
{
private:
    int a;
    int b;
public:
    void setData();
    void displayData();
    friend void maximum(One m);
};
void One::setData()
{
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
}
void One::displayData()
{
    cout<<"a = "<<a<<" b = "<<b<<endl;
}
void maximum(One m)
{
    if(m.a>m.b)
    {
        cout<<m.a<<" is the largest";
    }
    else
    {
        cout<<m.b<<" is the largest";
    }
}
int main()
{
    One o;
    o.setData();
    o.displayData();
    maximum(o);
}