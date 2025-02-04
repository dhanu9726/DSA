#include<iostream>
using namespace std;
int main()
{
	int amount;int final_amount;int discount;
	cout << "Enter value of amount:";
	cin >> amount;
	if(amount>=0 && amount<=1000)
	{	cout << "You get 5% discount"<< endl;
		discount=(amount*5)/100;
	  final_amount= amount - discount;
	   cout << "Your Final Amount : " ;
	  cout << final_amount;
	}	
		if(amount>1000 && amount<=5000)
	{
		cout << "You get 10% discount"<< endl;
		discount=(amount*10)/100;
	  final_amount= amount - discount;
	   cout << "Your Final Amount : ";
	  cout << final_amount;
	}
		if(amount>5000 && amount<=10000)
	{
		cout << "You get 20% discount"<< endl;
		discount=(amount*20)/100;
	  final_amount= amount - discount;
	   cout << "Your Final Amount : ";
	  cout << final_amount;
	}
		if(amount>10000)
	{
		cout << "You get 25% discount" << endl;
		discount=(amount*25)/100;
	  final_amount= amount - discount;
	  cout << "Your Final Amount : ";
	  cout << final_amount;
	}
}
