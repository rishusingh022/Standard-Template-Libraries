#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    switch (ch) {
        case 'B':cout<<"burger"<<endl;
                    break;
        case 'M':cout<<"maggi"<<endl;
                         break;

        case 'P':cout<<"pizza"<<endl;
                            break;
        default :cout<<"item not avaialable"<<endl;
                            break;
    }   
}