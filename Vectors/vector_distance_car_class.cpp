#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
class Car{
    public:
       string car_name;
       int x,y;
       Car(){}
       Car(string n,int x,int y){
           this->car_name=n;
           this->x=x;
           this->y=y;
       }
       int distance(){
           return x*x + y*y;
       }
};
bool compare(Car A,Car B){
    int d1=A.distance();
    int d2=B.distance();
    // if distance are equal then sort according to x cordinate
    if(d1==d2){
        return A.car_name.length()<B.car_name.length();
    }
    return d1<d2;
}
int main(){
    int n;
    cin>>n;
    vector<Car> v;
    for(int i=0;i<n;i++){
        int x,y;
        string name;
        cin>>name;
        cin>>x>>y;
        Car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);
    for(auto p:v){
        cout<<"car "<<p.car_name<<"distance "<<p.distance()<<" Location"<<p.x<<","<<p.y<<endl;
    }
    return 0;
}