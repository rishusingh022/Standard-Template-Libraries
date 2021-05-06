#include<iostream>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
void BubbleSort(int arr[],int n,int key){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(compare(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n,key);
    return 0;
}