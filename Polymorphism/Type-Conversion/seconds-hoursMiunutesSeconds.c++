#include<iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time()
    {
        hours=0;
        minutes=0;
        seconds = 0;
    }
    Time(int t)
    {
        hours = t/3600;
        t%=3600;
        minutes = (t/60);
        seconds = t-minutes*60;
    }
    void display()
    {
        cout<<"Hours: "<<hours<<endl;
        cout<<"Minutes: "<<minutes<<endl;
        cout<<"Seocnds: "<<seconds<<endl;
    }
};
int main()
{
    Time T1;
    int duration = 4270;
    T1 = duration;
    T1.display();
}
