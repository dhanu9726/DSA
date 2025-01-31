//3>	 WAP TO CHECK NUMBER IS NEGATIVE, POSITIVE, OR NEUTRAL.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter Number To Check Number is Nagative Positive Or Neutral : ";
	cin >> num;
	if(num >= 0)
	{
		cout << "Number is Positive";
	}
	else if(num ==0)
	{
		cout << "Number is Neutral";
	}
	else
	{
		cout << "Number is Nagative";
	}
	
}