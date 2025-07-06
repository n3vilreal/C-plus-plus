#include<iostream>
using namespace std;
class Person
{
protected:
    char name[20];
    char address[20];    
public:
    void getPerson()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter address: ";
        cin>>address;
    }
    void displayPerosn()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }

};
class Student: public Person
{
private:
    int roll;
    char grade;
public:
    void getStudent()
    {
        cout<<"Enter roll: ";
        cin>>name;
        cout<<"Enter grade: ";
        cin>>address;
    }
    void displayStudent()
    {
        cout<<"Roll: "<<name<<endl;
        cout<<"Grade: "<<address<<endl;
    }
};
int main()
{
    Student s;
    s.getPerson();
    s.getStudent();
    cout<<endl<<"Details: "<<endl;
    s.displayPerosn();
    s.displayStudent();
    return 0;
}
