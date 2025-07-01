#include<iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
public:
    Time()
    {
        hours=0;
        minutes=0;
    }
    Time(int t)
    {
        hours = t/60;
        minutes = t%60;
    }
    void display()
    {
        cout<<"Hours: "<<hours<<endl;
        cout<<"Minutes: "<<minutes<<endl;
    }
};
int main()
{
    Time T1;
    int duration = 85;
    T1 = duration;
    T1.display();
}
