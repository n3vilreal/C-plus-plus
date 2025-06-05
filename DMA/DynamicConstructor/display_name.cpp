#include<iostream>
#include<string.h>
using namespace std;
class Demo
{
    private:
        char *p;
    public:
        Demo()
        {
            p = new char [1];
            strcpy(p,"");
        }
        Demo( char *s)
        {
            p = new char(strlen(s)+1);
            strcpy(p,s);
        }
        ~Demo()
        {
            delete[] p;
        }
        void display()
        {
            cout<<"Name is: "<<p<<endl;
        }
};
int main()
{
    Demo d1("Ram ");
    Demo d2("Sharma Adhikari");
    d1.display();
    d2.display();
    return 0;
}
