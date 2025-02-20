  #include <iostream>
  using namespace std;

  int main() 
  { 	
    int x, y;

    cout << "Enter value:(x,y): ";
    cin >> x >> y;

    int arr[x][y];

    cout << "Enter elements:" << endl;
    for (int i=0; i<x; i++) 
	{
        for (int j=0; j<y; j++) 
		{
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];

    for (int i=0; i<x; i++) 
	{
        for (int j=0; j<y; j++) 
		{
            if (arr[i][j] > max) 
			{
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum value is: " << max << endl;
}
