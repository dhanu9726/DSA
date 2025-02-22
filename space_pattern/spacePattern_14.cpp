#include<iostream>
using namespace std;

int main()
{
	for(char i='A'; i<='E'; i++)
	{
		for(char k='E'; k>i ; k--)
		{
			cout << " ";
		}
		for(char j='A'; j<=i; j++)
		{
			cout << j ;
		}
		cout << endl;
	}
}

//  Output:
//        A
//      A B
//    A B C
//  A B C D
//A B C D E
