#include<iostream>
using namespace std;

int main() 
{
    int n=5; 
    for (int i=0; i<n; i++) 
    {
        for(int j=0; j<(n-i-1); j++) 
        {
            cout << "  "; 
        }
        for(int j=(n-i); j<=n; j++) 
        {
            cout << j << " ";
        }
        cout << endl;
    }
     return 0;
}

//   Output:
//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5

