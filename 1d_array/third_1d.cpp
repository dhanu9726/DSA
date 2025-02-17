#include<iostream>
using namespace std;
int main()
//1st and 2nd sum in third 1d array
{
	int n;
	cout << "Enter size of array:";
	cin >> n;
	
	int sum=0;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cout << "a[" << i << "]";
		cin >> a[i] ;
	}
	
	for(int i=0; i<n; i++)
	{
	    cout << a[i];	
	}
	cout << endl;
    
	int b[n];
	for(int i=0; i<n; i++)
	{
		cout << "b[" << i << "]";
		cin >> b[i] ;
	}
	
	for(int i=0; i<n; i++)
	{
	    cout << b[i] ;	
	}
	cout <<endl;
	
	cout << "c: "<< endl;
	int c[n];
	for(int i=0; i<n; i++) 
	{
	    c[i]=a[i]+b[i];
	    cout << "c["<<i<<"]" << c[i];
	    cout << endl;
	}
}
