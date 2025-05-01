//Defining a function outside class
#include<iostream>
using namespace std;

class Student
{
private:
    char name[20];
    int roll;
    int marks;

public:
    void getDetails();
    void display();
};

void Student::getDetails() //Accessing function outside class
{
    cout<<"Enter name, roll, marks: ";
    cin>>name;
    cin >> roll;
    cin >> marks;
}

void Student::display() //Accessing function outside class
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll: "<<roll<<endl;
    cout<<"Marks: "<<marks<<endl;
}

int main()
{
    Student s; //Creating object
    s.getDetails(); //Calling function inside object
    s.display();
    return 0;
}
