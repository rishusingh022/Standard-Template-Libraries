#include<iostream>
using namespace std;
int noDigit(int n , int digit)
{
    int count = 0;
    
    while(n != 0)
    {
        if(digit == n % 10)
        {
            count += 1;
        }
        
        n = n / 10;
    }
    
    return count;    
}//count digit
int main(){
    
    int n;
    cin>>n;
    int ans = 0;
    while(n != 0){
        int digit = n % 10;
        ans = ans *10 + digit;
        n /= 10;
    }
    cout<<ans;
}