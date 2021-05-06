#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n,int key){
    for(int i=0;i<=n-1;i++){
        int e=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>e){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=e;
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
    InsertionSort(arr,n,key);
    return 0;
}