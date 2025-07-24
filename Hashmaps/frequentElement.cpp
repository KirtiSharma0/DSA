//most freq element in array
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {1,3,2,1,4,1};
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    //traversing in map
    int max = 0;
    for(auto x: mp){ 
        if(x.second>max){  //x.second = freq
            max = x.first;
        }
    }
    cout<<max;
    return 0;
}