#include<iostream>
using namespace std;
class Parent
{
public:
    void display()
    {
        cout<<"this is parent class"<<endl;
    }
};
class Child:public Parent
{
public:
    void display()
    {
        cout<<"this is child class"<<endl;
    }
};
int main()
{
    Child c;
    c.display();
    c.Parent::display();
    return 0;
}