#include<iostream>
using namespace std;
class Person
{
protected:
    char name[20];
    char address[20];
public:
    void getPerson();
    void displayP();
};
class College
{
protected:
    char name[20];
    char address[20];
public:
    void getCollege();
    void displayC();
};
class Student:public Person, public College
{
private:
    int roll;
    char grade[10];
public:
    void getStudent();
    void displayS();
};
void Person::getPerson()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter address: ";
    cin>>address;
}
void College::getCollege()
{
    cout<<"Enter College: ";
    cin>>name;
    cout<<"Enter College Address: ";
    cin>>address;
}
void Student::getStudent()
{
    cout<<"Enter Roll: ";
    cin>>roll;
    cout<<"Enter Grade: ";
    cin>>grade;
}
void Person::displayP()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
}
void College::displayC()
{
    cout<<"College: "<<name<<endl;
    cout<<"College Address: "<<address<<endl;
}
void Student::displayS()
{
    cout<<"Roll: "<<roll<<endl;
    cout<<"Grade: "<<grade<<endl;
}
int main()
{
    Student s;
    s.getPerson();
    s.getCollege();
    s.getStudent();
    cout<<"Details: "<<endl;
    s.displayP();
    s.displayC();
    s.displayS();
    return 0;
}