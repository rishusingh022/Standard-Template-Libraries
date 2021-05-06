#include <iostream>
#include<list>
using namespace std;

class Book{
    public:
        string name;
        int price; 
    Book(){

    }   
    Book(string name,int price){
        this->name=name;
        this->price=price;
    } 

};

class BookCompare{
    public:
       bool operator()(Book A,Book B){
           if(A.name==B.name){
               return true;
           }
           return false;
       }
};

template<typename T>
int search(T arr[],int n,T key){

    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
    //return n if element not found
    return n;
}
//template + iterator
template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end, T key){

    while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
    }
    return end;
}


//template + iterator + comparator freedom from all type of container
template<class ForwardIterator,class T,class BookCompare>
ForwardIterator search(ForwardIterator start,ForwardIterator end, T key,BookCompare cmp){

    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}

int main() {
    /*
    int arr[] = {1,3,5,7,10,12};
    int n = sizeof(arr)/sizeof(int);
    cout<<search(arr,n,10)<<endl;
    */
    
    //list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_back(5);
    // l.push_back(3);

    list<Book> l;
    
    //vector<Book> l;
    // this also work fine with vector
    
    Book b1("c++",100);
    Book b2("python",120);
    Book b3("java",130);

    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    Book booktofind("c++",110);//new edition

    BookCompare cmp;
    // if(cmp(b1,booktofind)){
    //     cout<<"found";
    // }

    auto it = search(l.begin(),l.end(),booktofind,cmp);
    if(it==l.end()){
        cout<<"element not present"; 
    }
    else{
        cout<<"Book found";
    }
    return 0;
}
