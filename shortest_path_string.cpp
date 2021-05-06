#include<iostream>
using namespace std;

int main(){
    char ch;
    ch=cin.get();
    int x=0;
    int y=0;
    while(ch!='\n'){
        if(ch=='N' or ch=='n'){
            y++;
        }
        else if(ch=='S' or ch=='s'){
            y--;
        }
        else if(ch=='E' or ch=='e'){
            x++;
        }
        else{
            x--;
        }
        ch=cin.get();
    }
    cout<<"final position"<<x<<y;

    // reduced string 
    while(x!=0 && y!=0){
        if(x>0){
            cout<<"E";
            x--;
        }
        else if(x<0){
            cout<<"W";
            x++;
        }
        if(y>0){
            cout<<"N";
            y--;
        }
        else if(x<0){
            cout<<"S";
            y++;
        }
    }

}