#include<iostream>
using namespace std;
int main() 
{
     int x, y;
     cout << "Enter value(x y): ";
     cin >> x >> y;

    int arr[x][y];
    int sum=0;
    int num=1;
	int start=2;
    for(int i=0; i<x; i++) 
	{
        for (int j=0; j<y; j++) 
		{
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    
    for(int i=0; i<x; i++)
    {
    	for(int j=0; j<y; j++)
    	{
    		num++;
		}
		sum = sum+arr[i][start];
		start--;
	} 
	cout <<sum; 
    //sum anti-diagonal element 2D
}