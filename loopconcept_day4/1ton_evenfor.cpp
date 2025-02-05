#include<iostream>
using namespace std;

int main()
{
    int n;
    
	  cout << " Enter a no.: ";
	  cin  >> n;
	
	for(int i=n; i>=1; i--)
    {
		if(i%2==0)
        {
		  cout << i << endl;
		}
	}
	
	 return 0;
	
}
