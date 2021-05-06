// Sample Input: 9
// 5 7 9 1 2 4 6 8 3
// 10
// Output Format: Print all the triplet present in the array in a new line each. The triplets must be printed as A, B and C where A,B and C are the elements of the triplet ( A<=B<=C) and all triplets must be printed in sorted order. Print only unique triplets.
// Sample Output: 1, 2 and 7
// 1, 3 and 6
// 1, 4 and 5
// 2, 3 and 5
// =====Solution=====
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int target;
    cin >> target;

    sort(a, a + n);

    
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (a[i] + a[l] + a[r] == target)
            {
                cout << a[i] << ", " << a[l] << " and " << a[r] << endl;
                l++;
                r--;
            }
            else if (a[i] + a[l] + a[r] < target)
                l++;
            else
                r--;
        }
    }

    return 0;
}
