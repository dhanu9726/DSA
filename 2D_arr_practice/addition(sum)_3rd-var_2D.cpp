 #include<iostream>
 using namespace std;
 //addition of all element of 2D array
 int main()
{
  int x,y;
  cout << "Enter size(x,y):";
  cin >> x >> y;
  
  int arr1[x][y];
  int arr2[x][y];
  int arr3[x][y];
  
  for(int i=0; i<x; i++)
	{
	  for(int j=0; j<y; j++)
      {
       cout << "Enter x[" << i << "]" << "[" << j << "]";
       cin >> arr1[i][j];
	  }
	}
  for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
        {
				cout << "Enter y[" << i << "]" << "[" << j << "]";
		        cin >> arr2[i][j];
		}
	}
  for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
        {
			arr3[i][j] = arr1[i][j]+arr2[i][j];
	    }
	}	
		cout << "addition of array: " << endl ;
		
  for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
        {
			cout << arr3[i][j];
		}
		cout<< endl;
	}	

}
