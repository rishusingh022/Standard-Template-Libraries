#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 1; i <= n; i++)
        cin >> num[i-1];
    int sum = 0, power = 1;
    for (int i = 0; i < n; i++)
    {
    while (num[i] != 0)
    {
        int t;
        t = num[i]%10;
        num[i] = num[i]/10;
        sum = sum + t*power;
        power = power*2;
    }
    cout << sum << endl;
    sum = 0;
    power = 1;
    }
    return 0;
}