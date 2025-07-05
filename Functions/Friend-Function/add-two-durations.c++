#include<iostream>
using namespace std;

class Time
{
private:
    int hr,min;
public:
    void getTime()
    {
        cout<<"Enter hour: ";
        cin>>hr;
        cout<<"Enter minutes: ";
        cin>>min;
    }
    void displayTime()
    {
        cout<<hr<<" hour and "<<min<<" minutes"<<endl;
    }
    friend void add_time(Time t1, Time t2);
};
void add_time(Time t1, Time t2)
{
    int hr,min;
    min = t1.min + t2.min;
    hr = min/60;
    min = min%60;
    hr = hr + t1.hr + t2.hr;
    cout<<hr<<" hour and "<<min<<" minutes"<<endl;
}
int main()
{
    Time t1, t2;
    t1.getTime();
    t2.getTime();
    t1.displayTime();
    t2.displayTime();
    add_time(t1, t2);
    return 0;
}