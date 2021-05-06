#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    int i=0;
    int j=n-1;
    while(i<j){
        int curr_sum=arr[i]+arr[j];
        if(curr_sum>k){
            j--;
        }
        else if(curr_sum<k){
            i++;
        }
        else if(curr_sum==k){
            cout<<"{"<<arr[i]<<","<<arr[j]<<"}";
            i++;
            j--;
        }
        cout<<endl;
    }
    return 0;
}