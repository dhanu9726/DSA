//1>	WAP TO CHECK THE VOTING ELIGIBILITY OF USER.
#include<iostream>
using namespace std;
int main(){
	int age;
	cout << "Enter your age:";
	cin >> age;
	if(age<=0 || age>=101)
	{
		cout << "Enter valid Age";
	}
	else if(age>=18)
	{
		cout << "You are valid for voting";
	}
	else
	{
		cout << "You are not valid for voting";
	}
}
