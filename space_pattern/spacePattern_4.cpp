#include<iostream>
using namespace std;

int main()
{
	int n=5;
    for(int i=5; i>=1; i--) 
    {
        for(int k=1; k<i; k++) 
        {
            cout << "  "; 
        }
        for(int j=5; j>=i; j--) 
        {
            cout << j << " ";
        }
        cout << endl;
    }
     return 0;
}

//  Output:
//        5
//      5 4
//    5 4 3
//  5 4 3 2
//5 4 3 2 1
