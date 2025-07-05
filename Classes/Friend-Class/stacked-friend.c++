/*
B is friend of A, and C is friend of B. 
A program where B access the data of A and stores it.
Then C access the data of B and displays it.
*/
#include<iostream>
using namespace std;
class B;
class C;
class A
{
private:
    int a;
    int b;
public:
    void setData()
    {
        a = 10;
        b = 20;
    }
    friend class B;
};
class B
{
private:
    int add;
public:
    int sum(A o)
    {
        add = o.a + o.b;
        return add;
    }
    friend class C;
};
class C
{
public:
    void display(B t)
    {
        cout<<t.add;
    }
};
int main()
{
    A m;
    B n;
    C o;
    m.setData();
    n.sum(m);
    o.display(n);
    return 0;
}
