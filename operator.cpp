#include<iostream>
using namespace std;
int main(){
    //ternary operator
    int c=0;
    int z=c %2 ==0 ? 1: 0;
    //bitwise operator
    int x=5;
    int y=7;
    cout<<(x&y);
    cout<<(x|y);
    cout<<(x^y);
    cout<<endl;
    //shift operator
    x=x<<2;
    cout<<x;
    cout<<(y>>1)<<endl;
    //unary operator
    cout<<(&x);
    //post increment /pre increment
    int a=10;
    int z=a++;
    z=++a;
    cout<<z;

}