//Information of n number of students creating object dynamically
#include<iostream>
using namespace std;
class Student
{
    private:
        int roll;
        char name[20];
    public:
        void input();
        void display();
};
void Student::input()
{
    cout<<"Enter details: "<<endl;
    cin>>roll>>name;
}
void Student::display()
{
    cout<<roll<<name<<endl;
}
int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student *ptr = new Student[n];
    for(int i = 0; i<n;i++)
    {
        (ptr + i) -> input();
    }
    for(int i = 0; i<n;i++)
    {
        (ptr + i) -> display();
    }
    delete[] ptr;
    return 0;
}