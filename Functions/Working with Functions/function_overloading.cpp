//Function Overloading to Calculate volume of cube, rectangular box and Cylinder
#include<iostream>
using namespace std;
float volume(float l, float b, float h)
{
    return(l*b*h);
}
float volume(float l)
{
    return(l*l*l);
}
float volume(float r, float h)
{
    return (3.14*r*r*h);
}
int main()
{
    cout<<"Volume of Cube: "<<volume(4)<<endl;
    cout<<"Volume of Cylinder: "<<volume(7,2,4)<<endl;
    cout<<"Volume of Rectangular Box: "<<volume(2,3,4)<<endl;
    return 0;
}
