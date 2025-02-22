#include<iostream>
using namespace std;

int main()
{
	 int n=5;
     for (int i=1; i<=5; i++) 
    {
        for (int j=1; j<i; j++)
        {
            cout << "  "; 
        }
        for (int j=i; j<=5; j++) 
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//  Output:
//1 2 3 4 5
//  2 3 4 5
//    3 4 5
//      4 5
//        5
