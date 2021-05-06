// Input Format: 
// Sample Input: 5
// Output Format: 
// Sample Output: 1  
// 2	2  
// 3	0	3    
// 4	0	0	4  
// 5	0	0	0	5
// =====Solution=====
#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
       
           for (j = 1; j <= i; j++)
           {
               if(j==1 || j==i)
                cout << i<<"    ";
               else
                cout << "0"<<"  ";
           }
        
        cout << endl;
        
    }
    return 0;
}
