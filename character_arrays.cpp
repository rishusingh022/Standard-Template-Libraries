#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char b[1000]){
    int i=0;
    int j=strlen(b)-1;
    while(i<j){
        if(b[i]==b[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    // interger array will return address of the first element
    // char a[5]={'a','b','c','d','\0'};
    // cout<<a;
    // char s[10];
    // cin>>s;
    // cout<<s;
    // always terminate the char array with null pointer to avoid wastage of space 
    char b[1000];
    cin.getline(b,1000);
    cout<<isPalindrome(b);
    return 0;
}