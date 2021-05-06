#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //for spaces
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        //fpr increasing number
        int val=i;
        for(int cnt=1;cnt<=i;cnt++){
            cout<<val;
            val=val+1;
        }
        //for decreasing number
        val=val-2;
        for(int cnt=1;cnt<=i-1;cnt++){
            cout<<val;
            val=val-1;
        }
        cout<<endl;
    }
    
    return 0;
}