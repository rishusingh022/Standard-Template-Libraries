/*
1  
11  
111   
1001   
11111  
100001  
 */

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    cin >> n;
    for (i = 1; i<= n; i++)
    {
        if (i%2 != 0 || i == 2)
            {
                for (j = 1; j<= i; j++)
                cout << "1";
                cout << endl;
            }
        else if (i%2 == 0 && i != 2)
            {
                for (k = 1; k<= i; k++)
                {
                    if (k == 1 || k == i)
                        cout << "1";
                    else
                        cout << "0";
                }
                cout << endl;
            }

    }
    return 0;
}