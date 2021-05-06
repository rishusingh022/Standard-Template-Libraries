// Problem Name: Recursion-Convert String to Integer
// Problem Difficulty: None
// Problem Constraints: 1 <= Length of String <= 10
// Problem Description:
// Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned. 
// Input Format: Enter a number in form of a String
// Sample Input: 1234
// Output Format: Print the number after converting it into integer
// Sample Output: 1234
// =====Solution=====
#include<iostream>
#include<cstring>
using namespace std;
int Convert(char arr[],int n){
    if(n==1){
      int x= (int)(arr[n-1]-48);
      return x;
    }
    int x= (int)(arr[n-1]-48);
    return Convert(arr,n-1)*10+x;
}
int main() {
    char arr[100];
    cin>>arr;
    int n=strlen(arr);
    int ans=Convert(arr,n);
    cout<<ans<<endl;
  return 0;
}