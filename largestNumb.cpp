#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    a = 5;
    b = 10;
    c = 7;

    if (a>b && a>c){
        cout<<"The largest number is: "<< a<<endl;
    }

    else if (b>a && b>c){
        cout<<"The largest number is: "<<b<<endl;
    }

    else if (c>a && c>b){
        cout<<"The largest number is: "<<c<<endl;
    }

    else
        cout<<"INVALID";

return 0;

}
