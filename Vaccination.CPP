#include <iostream>
using namespace std;


int main() {
    int age;
    cout<<"ENTER YOUR AGE:";
    cin>>age;
    
    if(age<18){
        cout<<"Minor not eligible";
    }
    else if (age>60){
        cout<<"Eligible for vaccination with highes priority";
    }
    else if(age>18 && age<60){
        cout<<"Eligible with least priority";
    }
    
    
    return 0;
}