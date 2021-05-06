#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n,int key){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
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
    SelectionSort(arr,n,key);
    return 0;
}