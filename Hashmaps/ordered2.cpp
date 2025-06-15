#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["riya"] = 12;
    m["sohan"] = 42;
    m["anna"] = 64;
    m["dart"] = 8;

    for(auto x : m){
       string name = x.first;
       int age = x.second;
       cout<<x.first<<" "<<endl;
       cout<<x.second<<" "<<endl;

    }
}