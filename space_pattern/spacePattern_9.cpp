#include<iostream>
using namespace std;

int main()
{
	 int n=5;
     for (int i=1; i<=5; i++) 
     {
        for (int j=1; j<i; j++) 
        {
            cout << " "; 
        }
        for (int j=5; j>=i; j--) 
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

//  Output:
//5 4 3 2 1
//  5 4 3 2
//    5 4 3
//      5 4
//        5

