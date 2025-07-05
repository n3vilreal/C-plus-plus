/*
Create two class: Class_one and Class_two with member ‘a’ and ‘b’ respectively.
Class_one and Class_two has member function set_data (), Display_data (). Class_one
has one another function, multiply () function. Multiply function multiples member of
two class and produces result. Use concept of friend function to write program for above
information.
*/

#include<iostream>
using namespace std;

class Class_two; //Forward Declaration
class Class_one
{
private:
    int a;
public:
    void set_data()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
    void Display_data()
    {
        cout<<"a = "<<a<<endl;
    }
    void multiply(Class_two t);
};
class Class_two
{
private:
    int b;
public:
    void set_data()
    {
        cout<<"Enter b: ";
        cin>>b;
    }
    void Display_data()
    {
        cout<<"b = "<<b<<endl;
    }
    friend void Class_one::multiply(Class_two t);
};
void Class_one::multiply(Class_two t)
{
    int m;
    m = a*t.b;
    cout<<"a x b = "<<m;
}
int main()
{
    Class_one o;
    Class_two t;
    o.set_data();
    t.set_data();
    o.Display_data();
    t.Display_data();
    o.multiply(t);
    return 0;

}