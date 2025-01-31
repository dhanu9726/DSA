//2>	WAP TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT..
#include<iostream>
using namespace std;
int main()

{
	int num;
	cout << "ENTER NUMBER TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT :";
	cin >> num;
	if(num % 7==0)
	{
		cout << "NUMBER IS DIVISIBLE BY 7";
	}
	else
	{
		cout << "NUMBER IS NOT DIVISIBLE BY 7";
	}
}