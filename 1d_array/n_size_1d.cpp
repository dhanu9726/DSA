#include<iostream>
using namespace std;
int main()

 //n_size 1d array
{
	int n;
	
	cout << "Enter size of array:";
	cin >> n;
	
	int sum=0;
	int arr[n];
	
	for(int i=1; i<=n; i++)
	{
	 cout << "arr[" << i << "]:";
	 cin >> arr[i];
	}
	
	for(int i=1; i<=n; i++)
	{
     cout << arr[i] ;	
	}
}
