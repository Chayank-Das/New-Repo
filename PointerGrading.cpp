#include <iostream>
using namespace std;

int main()
{
    signed long num1 = 0;
	cout << " Enter your marks : ";
    cin >> num1;
    if(num1 > 9 && num1<10)
    {
        cout << " Grade A+\n\n";
    }
    else if(num1 >8  && num1<=9){
        cout << " Grade A\n\n";
    }
    else if(num1 > 7 && num1<=8){
        cout << " Grade B+\n\n";
    }
    else if(num1 > 6 && num1<=7){
        cout << " Grade B\n\n";
    }
    else if(num1 > 5 && num1<=6){
        cout << " Grade C\n\n";
    }
    else if(num1 > 4 && num1<=5){
        cout << " Grade D\n\n";
    }
    else if(num1 > 0 && num1<=4){
        cout << " Failed\n\n";
    }
    else
    {
        cout << "False input";
    }
    return 0;
}