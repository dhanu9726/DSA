#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter size of array:";
    cin >> n;

    int arr[n];
    int arr1[n];

    for(int i=0; i<n; i++) 
	{
        cout << "Enter arr[" << i << "]:";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) 
	{
        arr1[i] = arr[i];
    }

    cout << "Copy:";
    for(int i=0; i<n; i++) 
	{
        cout << arr1[i] << " ";
    }
    cout << endl;
}
    // copy elements into another array
