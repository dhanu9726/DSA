//4>	WAP TO PRINT GRADES OF STUDENT BASED ON THEIR PERCENTAGE.
#include<iostream>
using namespace std;
int main()
{
	int eng;
	int sci;
	int hindi;
	int sum;
	int percentage;

	cout << "Enter marks of English : ";
	cin >> eng;
	cout << "Enter marks of Science : ";
	cin >> sci;
	cout << "Enter marks of hindi : ";
	cin >> hindi;
	cout <<  "Total Marks : ";
	sum=eng+sci+hindi;
	cout << sum; 
	cout << "\n";
	percentage=(sum/300.0)*100;
	cout << "Percentage is : ";
	cout << percentage;
}