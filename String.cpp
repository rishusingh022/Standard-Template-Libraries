#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()<b.length();
}
int main(){
    string s0;
    //append
    s0.append("i love c++");
    cout<<s0<<endl;
    s0+=" python";
    cout<<s0<<endl;
    //remove
    s0.clear();
    cout<<s0<<endl;
    s0="apple";
    string s1="orange";
    cout<<s1.compare(s0)<<endl;

    //find substring
    string s="i want to have apple juice";
    int idx=s.find("apple");
    cout<<idx<<endl;

    //remove word
    string word="apple";
    int len=word.length();
    s.erase(idx,len+1);
    cout<<s<<endl;
    return 0;

    //sorting
    int n;
    cin>>n;
    cin.get();
    string s[100];
    for(int i=0;i<=n;i++){
        getline(cin,s[i]);
    }
    sort(s,s+n,compare);
    for(int i=0;i<=n;i++){
        cout<<s[i]<<endl;
    }
}