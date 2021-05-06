// Sample Output: 1
// 11
// 202
// 3003
// 40004
#include <iostream>
using namespace std;
int main()
{
    int i, j,x = -1;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (x < 1)
        {
            for (j = 1; j <= i; j++)
                cout << "1";
        }
        else
        {
           for (j = 1; j <= i; j++)
           {
               if(j==1 || j==i)
                cout << i-1;
               else
                cout << "0";
           }
        }
        cout << endl;
        x++;
    }
    return 0;
