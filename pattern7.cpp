#include<iostream>
using namespace std;
// Take N (number of rows), print the following pattern (for N = 4). 

//                            1 
//                          2 3 2
//                        3 4 5 4 3
//                      4 5 6 7 6 5 4

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        k--;
        for(int j=1;j<i;j++){
            k--;
            cout<<k;
        }
        cout<<endl;
    }
}