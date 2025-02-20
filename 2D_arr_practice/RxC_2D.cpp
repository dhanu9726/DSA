  #include<iostream>
  using namespace std;
  
  int main()
  {
	int x,y;
	
	cout << "Enter size of array(x,y): ";
	cin >> x >> y;
	
	int arr[x][y];
	
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
		 cout << "Enter[" << i << "]" << "[" << j << "]";
		 cin >> arr[i][j];
		}
	}
	
	for(int i=0; i<y; i++)
	{
	    for(int j=0; j<y; j++)
		{
         cout << arr[i][j] << " ";
		}
		 cout << endl;
	}
  }

