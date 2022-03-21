#include <iostream>

using namespace std;

int main()
{
    char x;
    cout << "Enter any character: ";
    cin >> x;

    if (int(x) >= 65 && x <= 90)
        cout << x << " is an UpperCase character\n";

    else if (int(x) >= 97 && x <= 122)
        cout << x << " is an LowerCase character\n";

    else
        cout << x << " is not an aplhabetic character\n";

    return 0;
}