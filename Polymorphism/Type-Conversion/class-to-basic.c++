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
    Time(int x, int y)
    {
        hours = x;
        minutes = y;
    }
    operator int()
    {
        int duration;
        duration = hours * 60 + minutes;
        return duration;
    }
    void display()
    {
        cout<<"Hours: "<<hours<<endl;
        cout<<"Minutes: "<<minutes<<endl;
    }
};
int main()
{
    Time T1(1,25);
    int duration;
    duration = T1;
    cout<<"Duration in minutes: "<<duration;
}
