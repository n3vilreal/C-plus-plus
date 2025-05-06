//Demonstration of using reference variable
#include<iostream>
using namespace std;
int main()
{
    int sum = 50;
    int &total=sum;
    cout<<"Sum = "<<sum<<" Total = "<<total<<endl;
    total = total + 10;
    cout<<"Sum = "<<sum<<" Total = "<<total;
    return 0;
}
