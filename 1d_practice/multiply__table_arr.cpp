#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter size of array:";
	cin >> n;
	
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
		cout << "Enter arr[" << i << "]:";
		cin >> arr[i] ;
	}
	cout << "Table:" << endl;
	
	for(int i=0; i<n; i++)
	{	
	  for(int j=1; j<=10; j++)
	  {
	  	 cout << arr[i] << " * " << j << " = " << arr[i] * j << endl;
	  }
	  cout << endl;
	}
	
	 //multiplication table of each arrays element
}
