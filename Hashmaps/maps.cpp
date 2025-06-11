#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    pair<string,int>p;
    //maps are used in terms of keys and values
    m["Rahul"] = 12;
    m["Priya"] = 34;
    m["Sachin"] = 22;
    //it is the format to insert value in string and their respective integer

    for(pair<string,int> p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}