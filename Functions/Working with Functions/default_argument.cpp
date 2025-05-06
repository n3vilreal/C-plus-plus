//Default argument to find simple interest
#include<iostream>
using namespace std;
float interest(float p, float t, float r = 1.5)
{
    return (p*t*r/100);
}
int main()
{
    float p,t,si;
    cout<<"Enter Principal and time:"<<endl;
    cin>>p>>t;
    si = interest(p,t);
    cout<<"Simple Interest = "<<si;
    return 0;

}
