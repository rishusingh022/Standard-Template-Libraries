/*
               
                           1           1
                           1 2       2 1  
                           1 2 3   3 2 1
                           1 2 3 4 3 2 1   

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    int total_element=2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        for(int j=1;j<=total_element-2*i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            k--;
            if(k==n){
                continue;
            }
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}