#include<iostream>
#include<cstring>
using namespace std;
class LibraryBook
{
private:
    char title[20];
    char author[20];
    bool borrowed=false;
public:
    LibraryBook()
    {
        strcpy(title,"");
        strcpy(author,"");
    }
    LibraryBook(char *a, char *b)
    {
        strcpy(title,a);
        strcpy(author,b);
    }
    void borrow()
    {
        if (borrowed == false)
        {
            borrowed = true;
        }
    }
    void displayStats()
    {
        if (borrowed == true)
        {
            cout<<"Borrowed"<<endl;
        }
        else
        {
            cout<<"Not Borrowed"<<endl;
        }
    }
};
int main()
{
    LibraryBook b1("Ikagi","Hector Gracia");
    LibraryBook b2;
    b2 = b1;
    b1.displayStats();
    b2.displayStats();
    b1.borrow();
    b1.displayStats();
    return 0;
}