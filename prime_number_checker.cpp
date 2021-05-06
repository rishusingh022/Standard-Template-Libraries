#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    for(;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is not Prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<n<<" is prime"<<endl;
    }
}