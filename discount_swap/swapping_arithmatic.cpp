#include <iostream>  
using namespace std;  

int main()  
{  
    int a = 6, b = 4;      
    
   
cout << " before swaping a:";
cin >> a;
cout << "before swaping b:";
cin >> b;   


    a = a * b;    
    b = a / b;     
    a = a / b;     

    cout << "After swapping:" << endl;
    cout << "a = " << a << " b = " << b << endl;      
    
    return 0;  
}  

