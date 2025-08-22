//you need to calculate the freq of arr1. and print freq for arr2, which is subarray of arr1
//arr1 6,3,7,2,6,7,6   arr2 2,3,,6,7   output(1,1,3,2)

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int arr1[7] = {6,3,7,2,6,7,6};
    int arr2[4] = {2,3,6,7};

    unordered_map<int,int>mp;
    //push val with freq of arr1 in map

    for(int i=0;i<7; i++){
        mp[arr1[i]]++;
    }

    vector<int>ans;
    //traversing in arr2 and accessing specific values from map
    for(int i=0;i<4;i++){
    int value = mp[arr2[i]];   //this will give value/freq of arr2[i] element when found in mp
    ans.push_back(value);
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}