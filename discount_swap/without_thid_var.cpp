//Destructuring
#include<iostream>
using namespace std;
int main()
{
int a=1;
int b =2;
cout << "Enter value of a:";
cin >> a;
cout << "Enter value of b:";
cin >> b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout << "Value of a:" << a<< "\n";  
    cout << "Value of b:"<< b;
}
