// Problem Name: Subset Sum Easy
// Problem Difficulty: None
// Problem Constraints: 1 ≤ T ≤10 <br>
// 1 ≤ N ≤ 4 <br>
// -10^5 ≤ A[i] ≤ 10^5
// Problem Description:
// Mike is a very passionate about sets. Lately, he is busy solving one of the
// problems on sets. He has to find whether if the sum of any of the non-empty subsets of the
// set A is zero.
// Input Format: The first line contains an integer T, which is the total number of test cases.  <br>
// T test cases follow.<br>
// Each test case consists of two lines. <br>
// The first line consists of a single integer N, which is the number of elements present in the set A. <br>
// The second line contains N space separated integers denoting the elements of the set A. 
// Sample Input: 1
// 4
// 1 3 2 -3
// Output Format: Print the answer for each testcase in a new line. <br>If the sum of any of the subset is zero, then print “Yes” (without quotes) else print “No”(without quotes).
// Sample Output: Yes
// =====Solution=====
#include<bits/stdc++.h>
using namespace std;

int sum=0;

bool subSum(int *a, int *arr, int n, int i,int j)
{
    if(i==n){
        int ans=0;
        for(int k=0;k<j;k++){
        ans+=arr[k];
        if(ans==0)
        return true;
    }
    return false;
    }
    int ans=0;
    for(int k=0;k<j;k++){
        ans+=arr[k];
        if(ans==0)
        return true;
    }
    if(ans==0&&j!=0)
        return 1;
    arr[j]=a[i];
    if(subSum(a,arr,n,i+1,j+1))
        return true;
    if(subSum(a,arr,n,i+1,j))
        return true;
    return false;    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(subSum(a,arr,n,0,0)){
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
    }
    
    return 0;
}
