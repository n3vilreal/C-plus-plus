#include<iostream>
using namespace std;

int byValue(int a)
{
    a+=10;
    return a;
}
int byReference(int &a)
{
    a+=10;
    return a;
}
int byPointer(int *a)
{
    *a = *a + 10;
    return *a;
}
int main()
{
    int b;
    int *a;
    b=20;
    int temp = 10;
    a = &temp;
    cout<<"Initially: a ="<<*a<<" b = "<<b<<endl;
    byValue(b);
    cout<<"By Value: b ="<<b<<endl;
    byReference(b);
    cout<<"By Reference: b = "<<b<<endl;
    byPointer(a);
    cout<<"By Pointer: a = "<<*a<<endl;
    return 0;
}