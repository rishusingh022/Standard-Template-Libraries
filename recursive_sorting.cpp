#include <iostream>
#include<vector>
using namespace std;

bool isSorted(const vector<int> &v, int i)
{
    if (i == v.size() - 1)
    {
        return true;
    }
    if (v[i] > v[i + 1])
    {
        return false;
    }

    return isSorted(v, i + 1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << boolalpha << isSorted(v, 0);

    return 0;
}
