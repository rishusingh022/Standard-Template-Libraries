#include<iostream>
using namespace std;

int main(){
    //problem read a list of character
    //cin.get()
    char ch;
    ch=cin.get();//this method read any single character including space and newline
    while(ch!='.'){
        cout<<ch;
        ch=cin.get();
    }
}