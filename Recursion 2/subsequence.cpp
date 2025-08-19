//print all the susequence of array
#include<iostream>
#include<vector>
using namespace std;
void func(int nums[], vector<int>arr, vector<int>ans, int i ){
   
    //edge case
   if(i==3){ 
    ans.push_back(arr[i]);
    return;
   }

   //picking an element , array value push
   arr.push_back(nums[i]);
   func(nums, arr, ans, i+1);   //move forward

   arr.pop_back();    //to skip last ele after picking it

   //not picking condition
   func(nums, arr, ans, i+1);   //just move forward by not picking any element

}

int main(){
    int nums[3] = {4,5,6};
    vector<int>arr;
    vector<int>ans;
    func(nums,arr,ans,0);  //initialize i = 0

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}