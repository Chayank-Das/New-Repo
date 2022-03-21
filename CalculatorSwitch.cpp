#include <iostream>
using namespace std;
int main()
{
    char oper;
    float num1 ,num2;
    cout<< "Enter the operator(+,-,/,*): ";
    cin>>oper;
    cout << "Enter two numbers: "<<endl;
    cin>>num1>>num2;

switch (oper){
    case '+':
        cout << num1 << "+" << num2 <<"="<<num1+num2;
        break;
    case '-':
        cout << num1 << "-" << num2 <<"="<<num1-num2; 
        break;

    case '*':
        cout << num1 << "*" << num2 <<"="<<num1*num2;
        break;

    case '/':
        cout << num1 << "/" << num2 <<"="<<num1/num2;
        break;

    default:
        cout<<"Error ! The operator is not valid";
        break;
}


return 0;

}