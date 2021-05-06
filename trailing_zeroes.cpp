#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int ans=0;
    for(long long int i=5;n/i>=1;i=i*5){
        ans+=n/i;
    }
    cout<<ans;
    return 0;
}