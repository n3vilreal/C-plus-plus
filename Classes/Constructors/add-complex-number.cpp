//Copying an object into another
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imag;
public:
    Complex()
    {
        real = 3;
        imag = 4;
    }
    Complex(Complex &c)
    {
        real = c.real;
        imag = c.imag;
    }
    friend Complex add(Complex &c1, Complex &c2);
    void display()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};
Complex add(Complex &c1, Complex &c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    Complex c1;
    Complex c2(c1);
    Complex c3;
    c3 = add(c1,c2);
    c3.display();
    return 0;
}