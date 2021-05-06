#include <bits/stdc++.h>
using namespace std;

int fastPow(int a, int x)
{
    if (x == 0)
    {
        return 1;
    }
    int ans = 1;
    int k = 1;
    while (k <= x)
    {
        if (x & k)
        {
            ans = ans * a;
        }
        k <<= 1;
        a *= a;
    }
    return ans;
}

bool isArmstrong(int n)
{
    int noOfDigits = 0;
    int m = n;
    while (m)
    {
        noOfDigits++;
        m /= 10;
    }

    m = n;
    int sum = 0;
    while (m)
    {
        int r = m % 10;
        sum += fastPow(r, noOfDigits);
        m /= 10;
    }

    return n == sum;
}

int main()
{
    int n;
    cin >> n;

    cout << boolalpha << isArmstrong(n) << endl;

    return 0;
}