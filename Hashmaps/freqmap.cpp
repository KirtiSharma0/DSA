#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n = 15;
    int arr[n] = {1,3,2,5,1,2,3,3,4,4,5,6,5,5,5} ;
    int freq = 1;

    unordered_map<int,int>map;  //number and freq
    
    for(int i=0;i<n;i++){
        map[arr[i]]++;
        if(map.find(arr[i])!= map.end()){  //value is already present in map
            freq++;
        }
    } 
    for(auto x : map){
        cout<<x.first<<" "<<x.second;
    }
    return 0;
}