#include<iostream>
using namespace std;

class Student //Class
{
private:
    char name[20];
    int roll;
    int marks;

public:
    //Defining function inside class
    void getDetails()
    {
        cout<<"Enter name, roll, marks: ";
        cin>>name>>roll>>marks;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main()
{
    Student s; //Creating object
    s.getDetails(); //Calling function inside object
    s.display();
    return 0;
}
