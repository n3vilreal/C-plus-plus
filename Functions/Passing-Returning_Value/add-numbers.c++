#include<iostream>
using namespace std;
int addByValue(int a, int b)
{
    return a + b;
}
int addByReference(int &a, int &b)
{
    return a + b;
}
int addByPointer(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    int a,b,sum;
    a = 10;
    b = 20;
    sum = addByValue(a,b);
    cout<<"Sum by Value: "<<sum<<endl;
    sum = addByReference(a,b);
    cout<<"Sum by Value: "<<sum<<endl;
    sum = addByPointer(&a,&b);
    cout<<"Sum by Value: "<<sum<<endl;
}