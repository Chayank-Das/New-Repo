#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter 1st Number: "; 
    cin>>a;
    cout<<"Enter 2nd Number: "; 
    cin>>b;
    cout<<"Before swap a="<<a<<" b="<<b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After swap a="<<a<<" b="<<b<<endl;
    return 0;
}