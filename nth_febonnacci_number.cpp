#include<iostream>
using namespace std;
int febonacci(int n){
    int a=0;
    int b=1;
    int c;
    for(int i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<febonacci(n)<<endl;
    return 0;
}