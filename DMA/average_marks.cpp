//Program
#include<iostream>
using namespace std;
int main()
{
    int n,avg=0;
    int *marks = new int[100];
    cout<<"Enter num of students: ";
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>*(marks+i);
    }
    for(int i=0; i<n;i++)
    {
        avg = *(marks + i) + avg;
    }
    avg = avg / n;
    cout<<"Average: "<<avg;
    delete[] marks;
    return 0;
}