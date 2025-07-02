//Incline function to calculate the area of rectangle
#include<iostream>
using namespace std;
inline float area(float l, float b)
{
    return(l*b);
}
int main()
{
    float l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    cout<<"Area = "<<area(l,b);
    return 0;
}
