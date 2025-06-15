#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    set<int>s;
    s.insert(3);
    s.insert(1);
    s.insert(6);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    //printing used for each loop
    for(auto x : s){
        cout<<x;
    }
    cout<<endl;
    //if it is unordered
    unordered_set<int>s2;
    s2.insert(3);
    s2.insert(1);
    s2.insert(6);
    s2.insert(2);
    s2.insert(4);
    s2.insert(5);
    //printing used for each loop
    for(auto y : s2){
        cout<<y;
    }
}