#include<iostream>
#include<cstring>
using namespace std;
class String
{
private:
    char word[20];
public:
    String()
    {
        strcpy(word,"");
    }
    String(char *s)
    {
        strcpy(word,s);
    }
    friend String operator +(String &s1, String &s2)
    {
        String temp;
        strcpy(temp.word,s1.word);
        strcat(temp.word,s2.word);
        return temp;
    }
    void display()
    {
        cout<<word<<endl;
    }
};
int main()
{
    String s1("Pragun");
    String s2("Dhungana");
    String s3;
    s1.display();
    s2.display();
    s3 = s1 + s2;
    s3.display();
    return 0;
}