#include<iostream>
#include<cstring>
using namespace std;
void removedublicate(char b[]){
    int l=strlen(b);
    if(l==0 or l==1){
        return;
    }
    int prev=0;
    for(int current=1;current<l;current++){
        if(b[prev]!=b[current]){
            prev++;
            b[prev]=b[current];
        }
    }
    b[prev+1]='\0';
    cout<<b;
}
int main(){
    char b[1000];
    cin.getline(b,1000);
    removedublicate(b);   
    return 0;
}