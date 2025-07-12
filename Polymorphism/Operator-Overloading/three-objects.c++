// C++ program to overload + operator for o4=o1+o2+o3;
#include <iostream>
using namespace std;
class sum
{
private:
int o1;
int o2;
int o3;
public:
sum()
{
    o1=0;
    o2=0;
    o3=0;
}
sum(int a, int b, int c)
{
    o1=a;
    o2=b;
    o3=c;
}
sum operator+(sum &d)
{
    sum temp;
    temp.o1=o1+d.o1;
    temp.o2=o2+d.o2;
    temp.o3=o3+d.o3;
    return temp;
}
void display()
{
    cout<<"the sum is "<<o1<<" + "<<o2<<" + "<<o3;
}
};
int main()
{
    sum obj1(3,4,5);
    sum obj2(5,6,7);
    sum obj3(7,8,9);
    sum obj4;
    obj4=obj1+obj2+obj3+obj4;
    obj4.display();
}