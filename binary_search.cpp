#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return 1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found=BinarySearch(arr,n,key);
    cout<<found;
    return 0;
}