#include <iostream>
using namespace std;
int main ()
{
    int i, a = 0, b = 1, sum = 0, t, j;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
       {
            cout << a << " ";
            sum = a + b;
            t = b;
            b = sum;
            a = t;
       }
       cout << endl;
    }
    return 0;
}