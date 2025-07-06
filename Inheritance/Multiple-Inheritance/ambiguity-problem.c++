#include<iostream>
using namespace std;
class Parent1
{
public:
    void display()
    {
        cout<<"This is Parent 1"<<endl;
    }
};
class Parent2
{
public:
    void display()
    {
        cout<<"This is Parent 2"<<endl;
    }
};
class Child:public Parent1, public Parent2
{

};
int main()
{
    Child c;
    // c.display(); error, results ambiguity
    c.Parent1::display();
    c.Parent2::display();
    return 0;
}
