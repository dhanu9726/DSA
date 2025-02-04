#include <iostream>  
using namespace std;  

int main()  
{  
    int a = 3, b = 7;      
 
cout << "Enter value of a before swaping:";
cin >> a;
cout << "Enter value of b before swaping:";
cin >> b;   

    swap(a, b);      

    cout << "After swapping:" << endl;
    cout << "a = " << a << " b = " << b << endl;      
} 

