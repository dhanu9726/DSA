#include<iostream>
using namespace std;
int main()

//Even Number 1d Array
{
	int n;
	 
	cout << "Enter size of array:";
	cin >> n;
	
	int arr[n];
	
	for(int i=1; i<=n; i++)
	{
	 cout << "[" << i << "]";
	 cin >> arr[i] ;
	}
	 cout << "Even num. is:";
	for(int i=1; i<=n; i++)
	{
	 if(i%2==0)
	 {
	  cout << arr[i] << " ";
	 }	
	}
}
