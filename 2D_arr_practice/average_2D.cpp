  #include<iostream>
  using namespace std;
 
  int main()
  {
	int x,y;
	cout << "Enter size(x,y): ";
	cin >> x >> y;
	
	int avg,sum=0;
	int arr[x][y];
	
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
		 cout << "Enter [" << i << "]" << "[" << j << "]";
		 cin >> arr[i][j];
		}
	}
	
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
		 cout << arr[i][j] << " ";
		 sum=sum+i;
		 
	     avg=sum/(x*y);
		}
		
		 cout << endl;
	}
  }

