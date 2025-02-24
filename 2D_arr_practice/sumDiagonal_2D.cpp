#include<iostream>
using namespace std;
int main() 
{
    int r, c;
    cout << "Enter value of r and c(r,c): ";
    cin >> r >> c;

    int arr[r][c];
    int num=1;
    int sum=0;

    for (int i=0; i<r; i++) 
	{
        for (int j=0; j<c; j++) 
		{
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    
    for (int i=0; i<r; i++)
    {
    	for(int j=0; j<c; j++)
    	{
    		num++;
   		    if(i==j)
    		{
    			sum = sum+arr[i][j];
			}
		}
	} 
	cout << sum; 
    //2D arr sum diagonal ele.
}