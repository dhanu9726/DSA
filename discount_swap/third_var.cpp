#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 8, temp;

 
cout << "Enter value of a before swaping:";
cin >> a;
cout << "Enter value of b before swaping:";
cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

