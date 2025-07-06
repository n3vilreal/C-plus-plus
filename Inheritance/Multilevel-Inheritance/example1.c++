#include<iostream>
using namespace std;
class College
{
protected:
    char c_name[20];
    char c_address[20];
public:
    void c_getDetails();
    void c_display();
};
class Staff:public College
{
protected:
    int id;
    char s_name[20];
public:
    void s_getDetails();
    void s_display();
};
class Teacher:public Staff
{
private:
    float salary;
    char faculty[20];
public:
    void t_getDetails();
    void t_display();
};
void College::c_getDetails()
{
    cout<<"Enter College: ";
    cin>>c_name;
    cout<<"Enter College Address: ";
    cin>>c_address;
}
void College::c_display()
{
    cout<<"College: "<<c_name<<endl;
    cout<<"College Address: "<<c_address<<endl;
}
void Staff::s_getDetails()
{
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter staff name: ";
    cin>>s_name; 
}
void Staff::s_display()
{
    cout<<"ID: "<<id<<endl;
    cout<<"Staff Name: "<<s_name<<endl;
}
void Teacher::t_getDetails()
{
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter Faculty: ";
    cin>>faculty;
}
void Teacher::t_display()
{
    cout<<"Salay: "<<salary<<endl;
    cout<<"Faculty: "<<faculty<<endl;
}
int main()
{
    Teacher t;
    t.c_getDetails();
    t.s_getDetails();
    t.t_getDetails();
    cout<<endl<<"Details: "<<endl;
    t.c_display();
    t.s_display();
    t.t_display();
    return 0;
}