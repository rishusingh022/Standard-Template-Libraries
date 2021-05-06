#include<iostream>
using namespace std;
int main(){
    //brute force approach
    //given number n find the auare root without using any predefined function
    float ans=0;
    float inc=1.0;
    //input
    int n;
    int p;
    cin>>n>>p;
    //for precesion 
    for(int times=0;times<=p;times++){
        while(ans*ans<=n){
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }
    cout<<ans;
}