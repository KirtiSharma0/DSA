#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);

    int target = 222 ;
    if(s.find(target)!=s.end()){  //target exist
       cout<<"Exist";
    } 
    else cout<<"not exist";
    

}