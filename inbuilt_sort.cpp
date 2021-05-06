#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
/*
bool compare(int a,int b){
    return a>b;
}
void BubbleSort(int arr[],int n,int key,bool (&cmp)(int a,int b)){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(cmp(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/
// here in bubble we used a compare fucntion just same way in sort slgo there will be one compare which will be overwritten by our wn compare fucntion
//as we passed cpmpare fucntion as parameter
//during time of fucntion calling we passed fucntion as paramter
int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}