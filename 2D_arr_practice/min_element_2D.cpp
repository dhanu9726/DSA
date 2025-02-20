 #include <iostream>
 using namespace std;

 int main() 
 {  	
    int x, y;

    cout << "Enter value of array:(x y): ";
    cin >> x >> y;

    int arr[x][y];

    cout << "Enter elements of the array:" << endl;
    
    for (int i=0; i<x; i++) 
	{
        for (int j=0; j<y; j++) 
		{
            cout << "Enter[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int min = arr[0][0];

    for (int i=0; i<x; i++) 
	{
        for (int j=0; j<y; j++) 
		{
            if (arr[i][j] < min) 
			{
                min = arr[i][j];
            }
        }
    }

    cout << "Minimum value is: " << min << endl;

}
