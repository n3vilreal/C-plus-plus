#include<iostream>
using namespace std;
class Dynamic
{
    int *a;
    int *b;
    public:
        Dynamic(int x, int y);
        ~Dynamic();
        void display();
        void add();

};
Dynamic::Dynamic(int x, int y)
{
    a = new int;
    *a = x;
    b = new int;
    *b = y;
}
void Dynamic::display()
{
    cout<< *a <<endl;
    cout<< *b <<endl;
}
void Dynamic::add()
{
    int sum = *a + *b;
    cout<<sum<<endl;
}
Dynamic::~Dynamic()
{
    delete a;
    delete b;
}
int main()
{
    Dynamic obj1(10,20);
    obj1.display();
    obj1.add();
    return 0;
}