#include<iostream>
using namespace std;
//GLobal scope
int x=100;
int main(){
    int x=10;
    cout<<x<<endl;
    for(int x=0;x<=5;x++){
        cout<<"Local scope"<<x<<endl;
    }
    cout<<"Local X"<<x<<endl;
    cout<<"GLobal X"<<::x<<endl;
    
}