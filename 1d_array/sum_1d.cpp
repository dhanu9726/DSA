#include<iostream>
using namespace std;
int main()

//sum 1d array
{
	int n;
	
	cout << "Enter size of array:";
	cin >> n;
	
	int sum=0;
	int arr[n];
	
	for(int i=1;i<=n;i++)
	{
	 cout << "arr[" << i << "]";
	 cin >> arr[i] ;
	}
	 cout << "sum:"<< endl;
	for(int i=1; i<=n; i++)
	{	
     sum=sum+i;
	}
	 cout << sum;
}
