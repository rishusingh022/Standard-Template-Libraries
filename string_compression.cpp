// Problem Name: String Compression
// Problem Difficulty: 1
// Problem Constraints: 1 < = length of String < = 1000
// Problem Description:
// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.
// Input Format: A single String S
// Sample Input: aaabbccds
// Output Format: The compressed String.
// Sample Output: a3b2c2d1s1
// =====Solution=====
#include <bits/stdc++.h>
using namespace std;

string compress(string s)
{
    if (s.size() == 0)
    {
        return "";
    }

    char ch = s[0];
    int i = 1;
    while (i < s.size() && s[i] == ch)
    {
        i++;
    }

    string ros = s.substr(i);
    ros = compress(ros);

    string charCount = to_string(i);
    return ch + charCount + ros;
}

int main()
{
    string s;
    cin >> s;

    cout << compress(s) << endl;

    return 0;
}