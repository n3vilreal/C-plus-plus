#include<iostream>
using namespace std;
void add(int a, int b, int c)
{
    int d;
    d = a+b+c;
    cout<<"The sum of three integer no = "<<d<<endl;
}
void add(int a, int b)
{
    int d;
    d = a+b;
    cout<<"The sum of two integer no = "<<d<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>a>>b>>c;
    add(a,b);
    add(a,b,c);
    return 0;
}
